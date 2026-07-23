/*
 * XREFs of SepAdtOpenObjectForDeleteAuditAlarm @ 0x140818E4C
 * Callers:
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x140A61470 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall SepAdtOpenObjectForDeleteAuditAlarm(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        unsigned int a9,
        _DWORD *a10,
        int a11,
        __int64 a12,
        __int128 *a13)
{
  __int128 *v13; // r12
  __int64 v15; // rax
  __int64 v17; // rbx
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  _DWORD Src[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v25; // [rsp+30h] [rbp-D0h]
  __int16 v26; // [rsp+32h] [rbp-CEh]
  int v27; // [rsp+38h] [rbp-C8h]
  int v28; // [rsp+3Ch] [rbp-C4h]
  __int64 v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  int v31; // [rsp+5Ch] [rbp-A4h]
  const int *v32; // [rsp+70h] [rbp-90h]
  int v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+7Ch] [rbp-84h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  int v36; // [rsp+98h] [rbp-68h]
  int v37; // [rsp+9Ch] [rbp-64h]
  const int *v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  unsigned __int16 *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  unsigned __int16 *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  __int64 v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+118h] [rbp+18h]
  int v49; // [rsp+11Ch] [rbp+1Ch]
  __int128 *v50; // [rsp+130h] [rbp+30h]
  int v51; // [rsp+138h] [rbp+38h]
  int v52; // [rsp+13Ch] [rbp+3Ch]
  __int64 v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+158h] [rbp+58h]
  int v56; // [rsp+15Ch] [rbp+5Ch]
  __int64 v57; // [rsp+160h] [rbp+60h]
  int v58; // [rsp+178h] [rbp+78h]
  int v59; // [rsp+17Ch] [rbp+7Ch]
  _DWORD *v60; // [rsp+190h] [rbp+90h]
  int v61; // [rsp+198h] [rbp+98h]
  int v62; // [rsp+19Ch] [rbp+9Ch]
  __int64 v63; // [rsp+1A0h] [rbp+A0h]
  __int128 v64; // [rsp+440h] [rbp+340h] BYREF

  v13 = &v64;
  if ( a13 )
    v13 = a13;
  v64 = 0LL;
  v15 = a6;
  if ( !a6 )
    v15 = a7;
  v17 = *(_QWORD *)(a7 + 24);
  v18 = **(_QWORD **)(v15 + 152);
  memset_0(Src, 0, 0x418uLL);
  v19 = *(unsigned __int8 *)(v18 + 1);
  v29 = v18;
  Src[0] = 3;
  v25 = a1;
  Src[1] = 4659;
  v26 = 8;
  v31 = 32;
  v27 = 4;
  v28 = 4 * v19 + 8;
  v30 = 1;
  v32 = &SeSubsystemName;
  v33 = 5;
  v34 = 8;
  if ( a6 )
    v35 = *(_QWORD *)(a6 + 24);
  else
    v35 = v17;
  v38 = &SeSubsystemName;
  v36 = 1;
  v37 = 32;
  if ( a4 )
  {
    v20 = *a4;
    v39 = 1;
    v40 = v20 + 16;
    v41 = a4;
  }
  if ( a5 )
  {
    if ( a1 == 117 || (v42 = 1, a1 == 129) )
      v42 = 2;
    v21 = *a5;
    v44 = a5;
    v43 = v21 + 16;
  }
  v49 = 16;
  v45 = 11;
  v46 = 8;
  v47 = 0LL;
  v48 = 13;
  v50 = v13;
  v51 = 7;
  v52 = 4;
  v53 = a9;
  v54 = 4LL;
  v55 = 10;
  v56 = 4;
  v57 = a9;
  if ( a10 )
  {
    v22 = *a10;
    if ( *a10 )
    {
      v58 = 8;
      v60 = a10;
      v59 = 12 * v22 + 8;
    }
  }
  v63 = a12;
  v61 = 11;
  v62 = 8;
  Src[2] = 12;
  SepAdtLogAuditRecord(Src);
  return 1;
}
