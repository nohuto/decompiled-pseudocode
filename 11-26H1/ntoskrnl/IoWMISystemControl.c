/*
 * XREFs of IoWMISystemControl @ 0x140AC63D4
 * Callers:
 *     WmipSystemControl @ 0x140AC63B0 (WmipSystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1403C0F80 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByProviderId @ 0x1403E01F4 (WmipFindRegEntryByProviderId.c)
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     WmipQueryWmiRegInfo @ 0x14082A750 (WmipQueryWmiRegInfo.c)
 *     WmipQueryWmiDataBlock @ 0x140AC6630 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x140AC67B8 (IoWMICompleteRequest.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  __int64 p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r13
  __int64 v7; // rsi
  int v8; // r15d
  __int64 MinorFunction; // rcx
  unsigned int v10; // esi
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r12d
  _QWORD *p_Length; // r9
  unsigned int v15; // eax
  char *v16; // rcx
  int v17; // r12d
  unsigned int v19; // ebx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  __int64 RegEntryByProviderId; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rax
  unsigned int v31; // r15d
  NTSTATUS v32; // eax
  void *v33; // rcx
  int v34; // edx
  __int16 v35; // r10
  __int64 v36; // r11
  unsigned int v37; // r15d
  __int128 *v38; // r8
  unsigned int v39; // r13d
  __int64 v40; // r12
  struct _NAMED_PIPE_CREATE_PARAMETERS *v41; // rcx
  __int64 *v42; // r9
  ULONG v43; // eax
  void *Src[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v45; // [rsp+50h] [rbp-10h] BYREF
  int MaximumInstances; // [rsp+A0h] [rbp+40h]
  int v47; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int16 *v48; // [rsp+B8h] [rbp+58h] BYREF

  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LOBYTE(a2) = 11;
  MaximumInstances = 0;
  v7 = 0LL;
  v8 = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)MinorFunction <= 0xBu
    && CurrentStackLocation->Parameters.WMI.ProviderId == v6
    && (WmipGuidList || (_BYTE)MinorFunction == 8 || (_BYTE)MinorFunction == 11) )
  {
    Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( (_BYTE)MinorFunction != 8 && (_BYTE)MinorFunction != 11 )
    {
      p_Length = &CurrentStackLocation->Parameters.QueryDirectory.FileName->Length;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= 7 )
        {
          v19 = -1073741163;
LABEL_32:
          a3->IoStatus.Status = v19;
          IofCompleteRequest(a3, 0);
          return v19;
        }
        a2 = *p_Length - WmipGuidList[3 * v7];
        if ( *p_Length == WmipGuidList[3 * v7] )
          a2 = p_Length[1] - WmipGuidList[3 * v7 + 1];
        if ( !a2 )
          break;
        v7 = (unsigned int)(v7 + 1);
      }
      v8 = WmipGuidList[3 * v7 + 2];
      if ( (unsigned __int8)(MinorFunction - 1) <= 2u || (_BYTE)MinorFunction == 9 )
      {
        MaximumInstances = Parameters[1].MaximumInstances;
        if ( (Parameters[1].ReadMode & 0x80u) == 0 )
        {
          v19 = -1073741162;
          goto LABEL_32;
        }
      }
    }
    if ( (unsigned int)MinorFunction <= 5 )
    {
      if ( (_DWORD)MinorFunction == 5 )
        goto LABEL_39;
      if ( !CurrentStackLocation->MinorFunction )
      {
        if ( LowPart >= 0x3C )
        {
          if ( (unsigned int)v7 > 1 )
          {
LABEL_25:
            if ( v8 )
            {
              Parameters[1].ReadMode &= ~0x10u;
              v15 = (8 * v8 + 67) & 0xFFFFFFF8;
              Parameters[1].MaximumInstances = v8;
              Parameters[1].CompletionMode = v15;
              if ( v15 > LowPart )
              {
                v16 = 0LL;
                v17 = 0;
              }
              else
              {
                p_OutboundQuota = (__int64)&Parameters[1].OutboundQuota;
                v16 = (char *)Parameters + v15;
                v17 = LowPart - v15;
              }
              return (unsigned int)WmipQueryWmiDataBlock(v6, (int)a3, v7, 0, v8, p_OutboundQuota, v17, v16);
            }
            else
            {
              return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221226134LL, 0);
            }
          }
          RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( RegEntryByProviderId )
          {
            v6 = *(_QWORD *)(RegEntryByProviderId + 16);
            if ( (_DWORD)v7 )
              v8 = 1;
            else
              v8 = *(_DWORD *)(RegEntryByProviderId + 52);
            WmipUnreferenceRegEntry(RegEntryByProviderId);
            goto LABEL_25;
          }
          return (unsigned int)IoWMICompleteRequest(v25, v24, a3, 3221226133LL, 0);
        }
        return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, 3221225507LL, 60);
      }
      v20 = MinorFunction - 1;
      if ( !v20 )
      {
        if ( (unsigned int)v7 <= 1 )
        {
          v30 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( !v30 )
            return (unsigned int)IoWMICompleteRequest(v25, v24, a3, 3221226133LL, 0);
          v6 = *(_QWORD *)(v30 + 16);
          WmipUnreferenceRegEntry(v30);
        }
        return (unsigned int)WmipQueryWmiDataBlock(
                               v6,
                               (int)a3,
                               v7,
                               MaximumInstances,
                               1,
                               (__int64)&Parameters[1].OutboundQuota,
                               LowPart - Parameters[1].InboundQuota,
                               (char *)Parameters + Parameters[1].InboundQuota);
      }
      v21 = v20 - 1;
      if ( !v21 || (v22 = v21 - 1) == 0 )
      {
        v10 = -1073741114;
        a3->IoStatus.Status = -1073741114;
        goto LABEL_52;
      }
      if ( v22 == 1 )
      {
LABEL_39:
        v10 = 0;
        a3->IoStatus.Status = 0;
LABEL_52:
        a3->IoStatus.Information = 0LL;
        goto LABEL_8;
      }
      return (unsigned int)-1073741808;
    }
    v26 = MinorFunction - 6;
    if ( !v26 )
      goto LABEL_39;
    v27 = v26 - 1;
    if ( !v27 )
      goto LABEL_39;
    v28 = v27 - 1;
    if ( v28 )
    {
      v29 = v28 - 1;
      if ( !v29 )
      {
        v10 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_52;
      }
      if ( v29 != 2 )
        return (unsigned int)-1073741808;
    }
    v48 = 0LL;
    v47 = 0;
    v31 = 0;
    v45 = 0LL;
    *(_OWORD *)Src = 0LL;
    v32 = WmipQueryWmiRegInfo(v6, (__int64)&v47, (UNICODE_STRING *)Src, &v48);
    v33 = Src[1];
    v10 = v32;
    if ( v32 >= 0 )
    {
      v34 = v47;
      if ( (v47 & 0x20) == 0 && !Src[1] )
      {
        v10 = -1073741808;
LABEL_83:
        a3->IoStatus.Information = v31;
        goto LABEL_7;
      }
      v35 = (__int16)Src[0];
      if ( (v47 & 0x20) != 0 )
      {
        v36 = 0LL;
        v37 = 248;
      }
      else
      {
        v34 = v47 | 4;
        v37 = LOWORD(Src[0]) + 250;
        v47 |= 4u;
        v36 = 248LL;
      }
      v38 = (__int128 *)v48;
      if ( !v48 )
      {
        v38 = &v45;
        v48 = (unsigned __int16 *)&v45;
      }
      if ( v37 < 0xF8 || (v39 = v37 + *(unsigned __int16 *)v38 + 2, v39 < v37) )
      {
        v31 = 0;
        v10 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v39;
        v10 = 0;
        if ( v39 <= LowPart )
        {
          v40 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          v41 = Parameters + 1;
          Parameters->MaximumInstances = 0;
          v42 = &WmipGuidList[2];
          Parameters->CompletionMode = v37;
          do
          {
            *(_OWORD *)&v41[-1].DefaultTimeout.LowPart = *((_OWORD *)v42 - 1);
            v41->NamedPipeType = *((_DWORD *)v42 + 1) | v34;
            *(_QWORD *)&v41->CompletionMode = v36;
            v41 = (struct _NAMED_PIPE_CREATE_PARAMETERS *)((char *)v41 + 32);
            v43 = *(_DWORD *)v42;
            v42 += 3;
            v41[-1].MaximumInstances = v43;
            --v40;
          }
          while ( v40 );
          if ( (v34 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v35;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src[1], LOWORD(Src[0]));
            v38 = (__int128 *)v48;
          }
          *(_WORD *)((char *)&Parameters->NamedPipeType + v37) = *(_WORD *)v38;
          memmove((char *)&Parameters->NamedPipeType + v37 + 2, *((const void **)v48 + 1), *v48);
          v33 = Src[1];
          v31 = v39;
        }
        else
        {
          v31 = 4;
        }
      }
    }
    if ( v33 )
      ExFreePoolWithTag(v33, 0);
    goto LABEL_83;
  }
  v10 = -1073741808;
LABEL_7:
  a3->IoStatus.Status = v10;
LABEL_8:
  IofCompleteRequest(a3, 0);
  return v10;
}
