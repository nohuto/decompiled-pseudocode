/*
 * XREFs of AccFieldUnit @ 0x14000ACF0
 * Callers:
 *     <none>
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     HeapAlloc @ 0x1400090C0 (HeapAlloc.c)
 *     ConPrintf @ 0x1400093EC (ConPrintf.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     SupportsOnlyRawAccess @ 0x14000CA74 (SupportsOnlyRawAccess.c)
 *     AcquireGL @ 0x14000CF90 (AcquireGL.c)
 *     GetObjectTypeName @ 0x14001495C (GetObjectTypeName.c)
 *     RawFieldAccess @ 0x140036EEC (RawFieldAccess.c)
 *     PrintObject @ 0x1400553E8 (PrintObject.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     memset @ 0x140072740 (memset.c)
 */

__int64 __fastcall AccFieldUnit(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  _DWORD *v6; // r14
  int v7; // edx
  __int64 result; // rax
  _DWORD *v9; // rbp
  int v10; // eax
  __int64 v11; // rsi
  _DWORD *v12; // r14
  __int64 v13; // r13
  bool v14; // cf
  int v15; // eax
  __int64 v16; // rbp
  BOOL v17; // ecx
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 *v21; // rax
  __int64 *v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // r8d
  __int64 v31; // r14
  __int64 v32; // rsi
  _DWORD *v33; // rbx
  unsigned int v34; // ebp
  __int64 *v35; // rax
  __int64 *v36; // r9
  unsigned int v37; // ecx
  int v38; // r8d
  unsigned int v39; // r8d
  void *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // r8d
  __int64 *v43; // rax
  unsigned int v44; // ecx
  int v45; // edx
  int v46; // r12d
  __int64 v47; // rbp
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int16 v51; // cx
  _QWORD *v52; // r9
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 ObjectTypeName; // rdx
  int v56; // edx
  __int64 v57; // [rsp+78h] [rbp+10h]
  __int64 v58; // [rsp+78h] [rbp+10h]
  unsigned int v59; // [rsp+80h] [rbp+18h] BYREF
  __int64 v60; // [rsp+88h] [rbp+20h]

  v3 = a3;
  if ( a3 )
  {
    v9 = (_DWORD *)(a2 + 16);
    goto LABEL_31;
  }
  v6 = *(_DWORD **)(*(_QWORD *)(a2 + 32) + 32LL);
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 0 )
  {
    v9 = (_DWORD *)(a2 + 16);
    if ( (*(_DWORD *)(a2 + 16) & 0xF) != 1 )
    {
      if ( (*(_DWORD *)(a2 + 16) & 0xF) == 2 )
        goto LABEL_9;
      if ( (*(_DWORD *)(a2 + 16) & 0xF) == 3 )
        goto LABEL_31;
      return 0LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(*(_QWORD *)v6 + 66LL) == 130 )
    {
      v29 = *(_QWORD *)(*(_QWORD *)v6 + 96LL);
      v30 = 128;
      v31 = v29 + 16;
      v32 = *(_QWORD *)(v29 + 8) + 64LL;
      v33 = *(_DWORD **)(*(_QWORD *)(v29 + 8) + 96LL);
      if ( v33[7] )
        v30 = v33[9] + 128;
      v34 = 0;
      v35 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, v30);
      v36 = v35;
      if ( v35 )
      {
        v35[1] = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v35;
        *(_DWORD *)v35 = 1330004801;
        v35[3] = (__int64)WriteFieldObj;
        v35[4] = v32;
        v35[5] = v31;
        v35[6] = v31 + 8;
        v37 = v33[5] & 0xF;
        if ( v37 && v37 <= 4 )
          v38 = 1 << (v37 - 1);
        else
          v38 = 1;
        *((_DWORD *)v35 + 14) = v38;
        v39 = 8 * v38;
        *((_DWORD *)v35 + 15) = (v39 + v33[4] - 1 + v33[3]) / v39;
        v40 = v35 + 12;
        v41 = 0LL;
        if ( v39 < 0x40 )
          v41 = 1LL << v39;
        v36[8] = v41 - 1;
        *((_DWORD *)v36 + 18) = v39 - v33[3];
        *((_DWORD *)v36 + 19) = v33[3];
        memmove(v40, v33 + 2, (unsigned int)(v33[9] + 32));
      }
      else
      {
        LogError(-1072431102);
        AcpiDiagTraceAmlError(a1, -1072431102);
        PrintDebugMessage(0x99u, 0LL, 0LL, 0LL, 0LL);
        return (unsigned int)-1072431102;
      }
      return v34;
    }
  }
  ++*(_DWORD *)(a2 + 16);
  v7 = v6[5];
  if ( v7 >= 0 && (v7 & 0x10) == 0 )
  {
    v50 = *(_QWORD *)v6;
    v51 = *(_WORD *)(*(_QWORD *)v6 + 66LL);
    if ( v51 == 130 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 + 96) + 8LL) + 96LL) + 20LL) & 0x10) == 0 )
        goto LABEL_9;
    }
    else if ( v51 != 132
           || (v52 = *(_QWORD **)(v50 + 96), (*(_DWORD *)(*(_QWORD *)(*v52 + 96LL) + 20LL) & 0x10) == 0)
           && (*(_DWORD *)(*(_QWORD *)(v52[1] + 96LL) + 20LL) & 0x10) == 0 )
    {
LABEL_9:
      v10 = *(_DWORD *)(a2 + 16) + 1;
      *(_DWORD *)(a2 + 16) = v10;
      if ( (int)v6[5] < 0 )
      {
        v10 |= 0x20000u;
        *(_DWORD *)(a2 + 16) = v10;
      }
      v11 = *(_QWORD *)(a2 + 32);
      v12 = v6 + 2;
      v13 = *(_QWORD *)(a2 + 40);
      v14 = (v10 & 0x10000) != 0;
      v60 = v11;
      v15 = v12[3];
      if ( v14 )
      {
        if ( (v15 & 0xFu) <= 4 )
        {
          v16 = 0LL;
          v59 = 0;
          v17 = 0;
          if ( ghGetAcpiTableVersion )
          {
            ghGetAcpiTableVersion(1413763908LL, &v59);
            v17 = v59 >= 2;
          }
          v18 = 4 * v17 + 4;
          if ( *(_WORD *)(v13 + 2) )
          {
            if ( *(_WORD *)(v13 + 2) == 1 )
            {
              v19 = v13 + 16;
              v18 = 8;
              goto LABEL_19;
            }
            if ( *(_WORD *)(v13 + 2) == 2 )
            {
              v18 = *(_DWORD *)(v13 + 24) - 1;
              goto LABEL_68;
            }
            if ( *(_WORD *)(v13 + 2) != 3 )
            {
              v3 = -1072431095;
              LogError(-1072431095);
              AcpiDiagTraceAmlError(a1, -1072431095);
              ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v13 + 2));
              v54 = 163;
              goto LABEL_78;
            }
          }
          else
          {
            if ( (v12[3] & 0x10000) == 0 && v12[2] <= 8 * v18 )
            {
              *(_WORD *)(v13 + 2) = 1;
              v19 = v13 + 16;
LABEL_19:
              v57 = v19;
              if ( !(unsigned __int8)SupportsOnlyRawAccess(v11) )
              {
                v20 = 128;
                if ( v12[5] )
                  v20 = v12[7] + 128;
                v3 = 0;
                v21 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, v20);
                v22 = v21;
                if ( v21 )
                {
                  v21[1] = *(_QWORD *)(a1 + 416);
                  v23 = v60;
                  *(_QWORD *)(a1 + 416) = v21;
                  *(_DWORD *)v21 = 1330004801;
                  v21[3] = (__int64)ReadFieldObj;
                  v21[4] = v23;
                  v21[5] = v57;
                  v21[6] = v57 + v18;
                  v24 = v12[3] & 0xF;
                  if ( v24 && v24 <= 4 )
                    v25 = 1 << (v24 - 1);
                  else
                    v25 = 1;
                  *((_DWORD *)v22 + 14) = v25;
                  v26 = 8 * v25;
                  *((_DWORD *)v22 + 15) = (8 * v25 + v12[1] + v12[2] - 1) / (unsigned int)(8 * v25);
                  v27 = 1LL << (8 * (unsigned __int8)v25);
                  if ( v26 < 0x40 )
                    v16 = v27;
                  v22[8] = v16 - 1;
                  *((_DWORD *)v22 + 18) = v26 - v12[1];
                  *((_DWORD *)v22 + 19) = v12[1];
                  memmove(v22 + 12, v12, (unsigned int)(v12[7] + 32));
                  goto LABEL_28;
                }
LABEL_80:
                v3 = -1072431102;
                LogError(-1072431102);
                AcpiDiagTraceAmlError(a1, -1072431102);
                ObjectTypeName = 0LL;
                v54 = 153;
                goto LABEL_78;
              }
              v53 = 0LL;
LABEL_75:
              v3 = RawFieldAccess(a1, v53, v11, v13);
              goto LABEL_28;
            }
            *(_WORD *)(v13 + 2) = 3;
            v42 = (unsigned int)(v12[2] + 7) >> 3;
            *(_DWORD *)(v13 + 24) = v42;
            v43 = HeapAlloc((_QWORD *)gpheapGlobal, 1179992648, v42);
            *(_QWORD *)(v13 + 32) = v43;
            if ( !v43 )
            {
              v3 = -1073741670;
              LogError(-1073741670);
              AcpiDiagTraceAmlError(a1, -1073741670);
              ObjectTypeName = *(unsigned int *)(v13 + 24);
              v54 = 161;
              goto LABEL_78;
            }
            memset(v43, 0, *(unsigned int *)(v13 + 24));
          }
          v18 = *(_DWORD *)(v13 + 24);
LABEL_68:
          v19 = *(_QWORD *)(v13 + 32);
          goto LABEL_19;
        }
        if ( *(_WORD *)(v11 + 2) == 5 )
        {
          v53 = 0LL;
          goto LABEL_75;
        }
        v3 = -1072431087;
        LogError(-1072431087);
        AcpiDiagTraceAmlError(a1, -1072431087);
        v54 = 162;
LABEL_77:
        ObjectTypeName = (unsigned int)v12[3];
LABEL_78:
        PrintDebugMessage(v54, (const void *)ObjectTypeName, 0LL, 0LL, 0LL);
LABEL_28:
        if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
        v9 = (_DWORD *)(a2 + 16);
LABEL_31:
        if ( (*v9 & 0x20000) != 0 && ghGlobalLock )
          ghGlobalLock(5LL, 1LL, qword_14008EAD0, 0LL, a1 + 328);
        if ( (gDebugger & 0xD0) != 0 && (*v9 & 0x10000) != 0 )
        {
          ConPrintf("=");
          PrintObject(*(_QWORD *)(a2 + 40));
        }
        v28 = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = *(_QWORD *)(v28 + 8);
        HeapFree(v28);
        return v3;
      }
      v44 = (unsigned int)(v12[2] + 7) >> 3;
      v59 = v44;
      if ( (v15 & 0xFu) > 4 )
      {
        if ( *(_WORD *)(v11 + 2) != 5 )
        {
          v3 = -1072431087;
          LogError(-1072431087);
          AcpiDiagTraceAmlError(a1, -1072431087);
          v54 = 213;
          goto LABEL_77;
        }
LABEL_87:
        v53 = 1LL;
        goto LABEL_75;
      }
      v45 = *(unsigned __int16 *)(v13 + 2);
      if ( v45 == 1 )
      {
        v46 = 8;
        v47 = v13 + 16;
        if ( v44 < 8 )
          v46 = v44;
      }
      else
      {
        v56 = v45 - 2;
        if ( !v56 )
        {
          v46 = *(_DWORD *)(v13 + 24) - 1;
          v58 = *(_QWORD *)(v13 + 32);
LABEL_53:
          if ( !(unsigned __int8)SupportsOnlyRawAccess(v11) )
          {
            v48 = HeapAlloc((_QWORD *)(a1 + 480), 1297237576, 0x40u);
            if ( v48 )
            {
              v48[1] = *(_QWORD *)(a1 + 416);
              v3 = 0;
              *(_QWORD *)(a1 + 416) = v48;
              v48[3] = (__int64)WriteFieldLoop;
              v49 = v60;
              *(_DWORD *)v48 = 1279677015;
              v48[4] = v49;
              v48[5] = (__int64)v12;
              v48[6] = v58;
              LODWORD(v49) = v59;
              *((_DWORD *)v48 + 14) = v46;
              *((_DWORD *)v48 + 15) = v49;
              goto LABEL_28;
            }
            goto LABEL_80;
          }
          goto LABEL_87;
        }
        if ( v56 != 1 )
        {
          v3 = -1072431095;
          LogError(-1072431095);
          AcpiDiagTraceAmlError(a1, -1072431095);
          ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v13 + 2));
          v54 = 214;
          goto LABEL_78;
        }
        v46 = *(_DWORD *)(v13 + 24);
        v47 = *(_QWORD *)(v13 + 32);
      }
      v58 = v47;
      goto LABEL_53;
    }
  }
  v6[5] = v7 | 0x80000000;
  result = AcquireGL(a1);
  if ( !(_DWORD)result )
    goto LABEL_9;
  return result;
}
