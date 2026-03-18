/*
 * XREFs of NVMeSplitIoCommandCompletion @ 0x1400202F0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 *     StorStatusToSrbStatus @ 0x140023018 (StorStatusToSrbStatus.c)
 *     NVMeIceIoStart @ 0x1400272C4 (NVMeIceIoStart.c)
 */

__int64 __fastcall NVMeSplitIoCommandCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned __int8 v7; // cl
  int v8; // ebp
  __int64 v9; // rcx
  unsigned int v10; // r9d
  unsigned int v11; // r12d
  unsigned int v12; // r8d
  unsigned int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // r15
  unsigned int v19; // esi
  bool v20; // cc
  __int64 PhysicalAddress; // rax
  unsigned int v22; // edx
  _QWORD *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int v26; // edx
  _QWORD *v27; // r8
  __int64 v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v32; // [rsp+68h] [rbp+20h] BYREF

  result = GetSrbExtension(a2);
  v5 = result;
  if ( *(_BYTE *)(a2 + 3) != 1 )
  {
    *(_BYTE *)(result + 4225) |= 8u;
    return result;
  }
  v32 = 0LL;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline()
    && (*(_DWORD *)(a1 + 4064) & 0x10000) != 0
    && *(_DWORD *)(GetSrbExtension(a2) + 4220) )
  {
    StorPortExtendedFunction(127LL, a1, a2, v6);
  }
  GetSrbDataBuffer(a2, &v32);
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v7 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v7 = *(_BYTE *)(a2 + 7);
  v8 = *(_DWORD *)(v5 + 4120);
  v9 = *(_QWORD *)(a1 + 8LL * v7 + 1672);
  LODWORD(v31) = *(_DWORD *)(v5 + 4136);
  v10 = *(_DWORD *)(v9 + 52);
  HIDWORD(v31) = *(_DWORD *)(v5 + 4140);
  v11 = (unsigned __int16)*(_DWORD *)(v5 + 4144) + 1;
  v12 = (v10 + *v32 - 1) / v10;
  v31 += v11;
  v13 = v12 - v11;
  v14 = v31;
  *(_DWORD *)(v5 + 4140) = HIDWORD(v31);
  *(_WORD *)(v5 + 4144) = v13 - 1;
  v15 = v10 * v11;
  *(_DWORD *)(v5 + 4136) = v14;
  v16 = v15 + (v8 & 0xFFF);
  LODWORD(v15) = (*(_DWORD *)(v5 + 4120) + v15) & 0xFFF;
  v17 = v16 >> 12;
  v18 = (unsigned int)v15;
  v19 = ((unsigned int)v15 + v10 * v13 + 4095) >> 12;
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline() )
  {
    v25 = *(_QWORD *)(v5 + 4184);
    if ( (_DWORD)v17 )
    {
      *(_QWORD *)(v5 + 4120) = v18 + v25;
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
        {
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v17);
        }
        else
        {
          v26 = 0;
          v27 = (_QWORD *)v5;
          do
          {
            v28 = v26 + (unsigned int)v17;
            ++v26;
            *v27++ = *(_QWORD *)(v5 + 8 * v28);
          }
          while ( v26 < v19 - 1 );
        }
        goto LABEL_34;
      }
    }
    else
    {
      *(_QWORD *)(v5 + 4120) = v18 + (v25 & 0xFFFFFFFFFFFFF000uLL);
      if ( v19 != 1 )
      {
        if ( v19 == 2 )
          *(_QWORD *)(v5 + 4128) = *(_QWORD *)v5;
        goto LABEL_34;
      }
    }
    *(_QWORD *)(v5 + 4128) = 0LL;
LABEL_34:
    *(_DWORD *)(v5 + 4220) = v19;
    goto LABEL_35;
  }
  if ( !(_DWORD)v17 )
  {
    *(_QWORD *)(v5 + 4120) = v18 + (*(_QWORD *)(v5 + 4120) & 0xFFFFFFFFFFFFF000uLL);
    if ( v19 != 1 )
    {
      v20 = v19 <= 2;
      if ( v19 == 2 )
      {
        PhysicalAddress = *(_QWORD *)v5;
LABEL_38:
        *(_QWORD *)(v5 + 4128) = PhysicalAddress;
        goto LABEL_39;
      }
      goto LABEL_36;
    }
LABEL_16:
    *(_QWORD *)(v5 + 4128) = 0LL;
    goto LABEL_39;
  }
  *(_QWORD *)(v5 + 4120) = v18 + *(_QWORD *)(v5 + 8LL * (unsigned int)(v17 - 1));
  if ( v19 == 1 )
    goto LABEL_16;
  if ( v19 == 2 )
  {
    *(_QWORD *)(v5 + 4128) = *(_QWORD *)(v5 + 8LL * (unsigned int)v17);
    goto LABEL_39;
  }
  v22 = 0;
  v23 = (_QWORD *)v5;
  do
  {
    v24 = v22 + (unsigned int)v17;
    ++v22;
    *v23++ = *(_QWORD *)(v5 + 8 * v24);
  }
  while ( v22 < v19 - 1 );
LABEL_35:
  v20 = v19 <= 2;
LABEL_36:
  if ( !v20 )
  {
    LODWORD(v31) = 0;
    PhysicalAddress = StorPortGetPhysicalAddress(a1, a2, v5, &v31);
    goto LABEL_38;
  }
LABEL_39:
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline()
    && (*(_DWORD *)(a1 + 4064) & 0x10000) != 0
    && (v29 = NVMeIceIoStart(a1, a2, v11)) != 0 )
  {
    result = StorStatusToSrbStatus(v29);
    *(_BYTE *)(a2 + 3) = result;
    *(_BYTE *)(v5 + 4225) |= 8u;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 0;
    v30 = *(_BYTE *)(v5 + 4225) & 0xFE;
    *(_QWORD *)(v5 + 4192) = 0LL;
    *(_BYTE *)(v5 + 4225) = v30 | 6;
    return ProcessCommand(a1, a2);
  }
  return result;
}
