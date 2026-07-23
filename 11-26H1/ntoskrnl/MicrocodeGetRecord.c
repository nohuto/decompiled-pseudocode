/*
 * XREFs of MicrocodeGetRecord @ 0x1406E18B8
 * Callers:
 *     PrExtGetRecord @ 0x1406E0F1C (PrExtGetRecord.c)
 * Callees:
 *     DrpGetRecord @ 0x1406E24F8 (DrpGetRecord.c)
 *     DrpGetRecordCount @ 0x1406E2534 (DrpGetRecordCount.c)
 *     DrpGetSectionAtIndex @ 0x1406E2560 (DrpGetSectionAtIndex.c)
 *     IntelMicrocodeMetaDataCheck @ 0x1406E2684 (IntelMicrocodeMetaDataCheck.c)
 *     AMDMicrocodeMetaDataCheck @ 0x1406E2908 (AMDMicrocodeMetaDataCheck.c)
 */

__int64 __fastcall MicrocodeGetRecord(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
        unsigned int *a6)
{
  unsigned int v6; // esi
  __int64 v7; // rbp
  __int64 v8; // r14
  char v9; // r15
  __int64 v12; // rdi
  unsigned int i; // eax
  _DWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  signed int v21; // eax
  char v22; // al
  __int64 v23; // rcx
  unsigned int v24; // [rsp+24h] [rbp-64h] BYREF
  unsigned int v25; // [rsp+28h] [rbp-60h]
  _DWORD *v26; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v27[9]; // [rsp+40h] [rbp-48h] BYREF

  v6 = 0;
  v26 = 0LL;
  v7 = 0LL;
  v27[0] = 0LL;
  v8 = 0LL;
  v9 = 0;
  v12 = a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    return 3221226021LL;
  }
  v24 = 0;
  if ( (int)DrpGetRecordCount(a2, a3, &v24) < 0 )
    return 3221225485LL;
  for ( i = 0; ; i = v25 + 1 )
  {
    v25 = i;
    if ( i >= v24 )
      break;
    if ( (int)DrpGetSectionAtIndex(v12, a3, i, &v26) < 0 )
      return 3221225485LL;
    v15 = v26;
    if ( *v26 == a1 )
    {
      if ( (int)DrpGetRecord(v12, a3, v26, v27) < 0 )
        return 3221225485LL;
      v16 = v27[0];
      if ( !v27[0] )
        return 3221225485LL;
      if ( a1 != 1 )
      {
        if ( a1 != 2 )
        {
          if ( a1 == 13 )
            goto LABEL_14;
          goto LABEL_44;
        }
        if ( *((_QWORD *)v15 + 3) + *(_QWORD *)(v27[0] + 8LL) + 4 * *(_DWORD *)(v27[0] + 28LL) + 32 > a3 )
          goto LABEL_44;
        v20 = IntelMicrocodeMetaDataCheck(v27[0], (unsigned int)v15[2]);
LABEL_26:
        if ( v20 < 0 )
          goto LABEL_44;
        if ( CmpContextListLock.WaitBlockFill5[27] )
        {
          v23 = *((_QWORD *)v15 + 2);
          *a4 = v16;
          *a5 = v23;
          HIDWORD(CmpContextListLock.RelativeTimerBias) = v15[2];
          CmpContextListLock.Timer.Header.Type = 1;
          *a6 = HIDWORD(CmpContextListLock.RelativeTimerBias);
          return 0LL;
        }
        v22 = *(_BYTE *)(v16 + 4);
        if ( CmpContextListLock.WaitBlockFill5[24] )
        {
          if ( v7 )
          {
            if ( v9 )
            {
              if ( !v22 || v9 != v22 )
                goto LABEL_44;
            }
            else if ( v22 )
            {
              v8 = *((_QWORD *)v15 + 2);
              v7 = v16;
              v6 = v15[2];
              v9 = *(_BYTE *)(v16 + 4);
            }
            if ( v6 >= v15[2] )
            {
LABEL_44:
              v12 = a2;
              continue;
            }
            v6 = v15[2];
          }
          else
          {
            v6 = v15[2];
          }
          v9 = *(_BYTE *)(v16 + 4);
        }
        else
        {
          if ( v6 >= v15[2] || v22 )
            goto LABEL_44;
          v6 = v15[2];
          v9 = 0;
        }
        v8 = *((_QWORD *)v15 + 2);
        v7 = v16;
        goto LABEL_44;
      }
LABEL_14:
      v17 = *((_QWORD *)v15 + 3);
      if ( *(_DWORD *)v27[0] == 1 )
      {
        v18 = v17 + 28;
        if ( v17 + 28 > a3 )
          goto LABEL_21;
        v19 = *(unsigned int *)(v27[0] + 24LL);
LABEL_23:
        v21 = a3 < v18 + *(_QWORD *)(v27[0] + 8LL) + 4 * v19 ? 0xC000000D : 0;
      }
      else
      {
        if ( *(_DWORD *)v27[0] != 13 )
          goto LABEL_44;
        v18 = v17 + 36;
        if ( v17 + 36 <= a3 )
        {
          v19 = *(unsigned int *)(v27[0] + 32LL);
          goto LABEL_23;
        }
LABEL_21:
        v21 = -1073741811;
      }
      if ( v21 < 0 )
        goto LABEL_44;
      v20 = AMDMicrocodeMetaDataCheck(v27[0], (unsigned int)v15[2]);
      goto LABEL_26;
    }
  }
  *a4 = v7;
  *a5 = v8;
  *a6 = v6;
  if ( v7 )
  {
    HIDWORD(CmpContextListLock.RelativeTimerBias) = v6;
    return 0LL;
  }
  return 3221226021LL;
}
