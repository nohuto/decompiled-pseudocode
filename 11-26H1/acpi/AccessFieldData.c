/*
 * XREFs of AccessFieldData @ 0x1400047D0
 * Callers:
 *     WriteFieldObj @ 0x1400038F0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x140004180 (ReadFieldObj.c)
 * Callees:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     GetFieldUnitRegionObj @ 0x140004D70 (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x140004EF0 (DereferenceObjectEx.c)
 *     AccessBaseField @ 0x140004F30 (AccessBaseField.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     PushPreserveWriteObj @ 0x14003F97C (PushPreserveWriteObj.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4, char a5)
{
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r12
  unsigned int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r15
  __int64 v21; // rdx
  bool v22; // cf
  unsigned int v23; // ecx
  unsigned __int64 v24; // rsi
  __int64 v25; // r15
  int (__fastcall *v26)(_QWORD, unsigned __int64, _QWORD *, _QWORD, __int64 *); // rax
  __int64 v27; // rax
  __int64 v28; // r9
  unsigned int v29; // r14d
  unsigned int v30; // r8d
  unsigned int v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rdi
  unsigned int v34; // ecx
  __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // r13
  __int64 v38; // rcx
  __int64 v39; // r12
  int (__fastcall *v40)(_QWORD, unsigned __int64, _QWORD *, _QWORD, __int64 *); // rax
  __int64 v41; // rax
  __int64 *v42; // rcx
  __int64 v43; // r8
  unsigned int v44; // ecx
  unsigned int v45; // r10d
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // r9
  char v49; // cl
  int v50; // eax
  signed __int32 v51[8]; // [rsp+0h] [rbp-61h] BYREF
  __int64 v52; // [rsp+20h] [rbp-41h]
  _QWORD Src[2]; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v54[14]; // [rsp+40h] [rbp-21h] BYREF
  __int64 v55; // [rsp+C8h] [rbp+67h] BYREF

  v5 = 0LL;
  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v15 = *(_QWORD *)(a2 + 32);
    v16 = (a3[3] & 0xF) - 1;
    if ( a5 )
    {
      v17 = 1;
      if ( v16 <= 3 )
        v17 = 1 << v16;
      v18 = *a3;
      if ( v18 + v17 > *(_DWORD *)(v15 + 8) )
      {
        LogError(3222536196LL);
        AcpiDiagTraceAmlError(a1, 3222536196LL);
        PrintDebugMessage(160, *a3, *(_DWORD *)(v15 + 8), v17, 0LL);
        LODWORD(v5) = -1072431100;
        return (unsigned int)v5;
      }
      v19 = a3[2];
      v20 = 0LL;
      v21 = 1LL << v19;
      v22 = v19 < 0x40;
      LODWORD(v55) = 0;
      v23 = a3[1];
      if ( v22 )
        v20 = v21;
      Src[0] = 0LL;
      v24 = *(_QWORD *)v15 + v18;
      v25 = (v20 - 1) << v23;
      if ( v17 > 8 )
      {
        *a4 = -1LL;
        return 0LL;
      }
      if ( !BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink)
        || (v26 = *(int (__fastcall **)(_QWORD, unsigned __int64, _QWORD *, _QWORD, __int64 *))(PmHalDispatchTable + 144)) == 0LL
        || v26(0LL, v24, Src, v17, &v55) < 0 )
      {
        if ( !(v24 % v17) )
        {
          switch ( v17 )
          {
            case 1u:
              v27 = *(unsigned __int8 *)v24;
              break;
            case 4u:
              v27 = *(unsigned int *)v24;
              break;
            case 2u:
              v27 = *(unsigned __int16 *)v24;
              break;
            case 8u:
              v27 = *(_QWORD *)v24;
              break;
            default:
              v27 = -1LL;
              break;
          }
          goto LABEL_20;
        }
        memmove(Src, (const void *)v24, v17);
      }
      v27 = Src[0];
LABEL_20:
      *a4 = v25 & v27;
      return (unsigned int)v5;
    }
    v28 = *a4;
    v29 = 1;
    if ( v16 <= 3 )
      v29 = 1 << v16;
    v30 = *a3;
    if ( v30 + v29 > *(_DWORD *)(v15 + 8) )
    {
      LogError(3222536196LL);
      AcpiDiagTraceAmlError(a1, 3222536196LL);
      PrintDebugMessage(211, *a3, *(_DWORD *)(v15 + 8), v29, 0LL);
      LODWORD(v5) = -1072431100;
    }
    else
    {
      v31 = a3[2];
      v32 = 1LL << v31;
      v33 = 0LL;
      v22 = v31 < 0x40;
      v54[4] = 0xFFFFFFFFLL;
      v34 = a3[1];
      if ( v22 )
        v33 = v32;
      LODWORD(v55) = 0;
      Src[0] = 0LL;
      v35 = (v33 - 1) << v34;
      v36 = *(_QWORD *)v15 + v30;
      v37 = v28 & v35;
      v54[0] = 0LL;
      v54[1] = 255LL;
      v38 = 0LL;
      v54[2] = 0xFFFFLL;
      v54[3] = 0LL;
      memset(&v54[5], 0, 24);
      v54[8] = -1LL;
      if ( v29 > 8 )
        return (unsigned int)v5;
      v39 = v54[v29];
      if ( !BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
        goto LABEL_35;
      v40 = *(int (__fastcall **)(_QWORD, unsigned __int64, _QWORD *, _QWORD, __int64 *))(PmHalDispatchTable + 144);
      if ( !v40 )
        goto LABEL_35;
      if ( v35 != v39 )
      {
        if ( v40(0LL, v36, Src, v29, &v55) < 0 )
        {
LABEL_34:
          v38 = Src[0];
LABEL_35:
          if ( v36 % v29 )
          {
            if ( v35 != v39 )
            {
              memmove(Src, (const void *)v36, v29);
              v38 = Src[0];
            }
            Src[0] = v37 | v38 & ~v35;
            memmove((void *)v36, Src, v29);
          }
          else
          {
            switch ( v29 )
            {
              case 1u:
                if ( v35 != v39 )
                  v38 = *(unsigned __int8 *)v36;
                Src[0] = v37 | v38 & ~v35;
                *(_BYTE *)v36 = Src[0];
                _InterlockedOr(v51, 0);
                break;
              case 4u:
                if ( v35 != v39 )
                  v38 = *(unsigned int *)v36;
                Src[0] = v37 | v38 & ~v35;
                *(_DWORD *)v36 = Src[0];
                _InterlockedOr(v51, 0);
                break;
              case 2u:
                if ( v35 != v39 )
                  v38 = *(unsigned __int16 *)v36;
                Src[0] = v37 | v38 & ~v35;
                *(_WORD *)v36 = Src[0];
                _InterlockedOr(v51, 0);
                break;
              case 8u:
                if ( v35 != v39 )
                  v38 = *(_QWORD *)v36;
                Src[0] = v37 | v38 & ~v35;
                *(_QWORD *)v36 = Src[0];
                KeFlushWriteBuffer();
                break;
            }
          }
          return (unsigned int)v5;
        }
        v38 = Src[0];
      }
      v41 = v37 | v38 & ~v35;
      v42 = &v55;
      Src[0] = v41;
      LOBYTE(v42) = 1;
      if ( (*(int (__fastcall **)(__int64 *, unsigned __int64, _QWORD *, _QWORD, __int64 *))(PmHalDispatchTable + 144))(
             v42,
             v36,
             Src,
             v29,
             &v55) < 0 )
        goto LABEL_34;
    }
    return (unsigned int)v5;
  }
  v9 = *(_QWORD *)(a2 + 32);
  v55 = 0LL;
  if ( *(_WORD *)(*(_QWORD *)v9 + 66LL) == 132 )
  {
    v43 = *(_QWORD *)(*(_QWORD *)v9 + 96LL);
    if ( a5 )
      return PushAccFieldObj(
               a1,
               (__int64)ReadFieldObj,
               *(_QWORD *)(v43 + 8) + 64LL,
               (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 96LL) + 8LL),
               (__int64)a4,
               4u);
    v44 = a3[2];
    v45 = a3[3];
    v46 = 0LL;
    if ( v44 < 0x40 )
      v46 = 1LL << v44;
    v47 = a3[3] & 0xF;
    v48 = ~((v46 - 1) << a3[1]);
    if ( (v45 & 0xF) != 0 && v47 <= 4 )
    {
      v49 = v47 - 1;
      if ( 8 * (1 << (v47 - 1)) >= 64 )
        goto LABEL_64;
    }
    else
    {
      v49 = v47 - 1;
      if ( v47 - 1 > 3 )
      {
        LOBYTE(v50) = 1;
LABEL_63:
        v5 = 1LL << (8 * (unsigned __int8)v50);
LABEL_64:
        if ( ((v5 - 1) & v48) != 0 && (v45 & 0x60) == 0 )
          return PushPreserveWriteObj(a1, *(_QWORD *)(v43 + 8) + 64LL, *a4);
        else
          return PushAccFieldObj(
                   a1,
                   (__int64)WriteFieldObj,
                   *(_QWORD *)(v43 + 8) + 64LL,
                   (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 96LL) + 8LL),
                   (__int64)a4,
                   4u);
      }
    }
    v50 = 1 << v49;
    goto LABEL_63;
  }
  result = GetFieldUnitRegionObj(v9, &v55);
  if ( !(_DWORD)result )
  {
    v11 = v55;
    if ( v55 )
    {
      LOBYTE(v52) = a5;
      v12 = AccessBaseField(a1, v55, (_DWORD)a3, (_DWORD)a4, v52);
      DereferenceObjectEx(v11, v13, v14);
      return v12;
    }
  }
  return result;
}
