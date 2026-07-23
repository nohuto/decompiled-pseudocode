/*
 * XREFs of PopConfigureHeteroThresholds @ 0x140AAA414
 * Callers:
 *     PopConfigureHeteroPolicies @ 0x140AA9D88 (PopConfigureHeteroPolicies.c)
 * Callees:
 *     Feature_UpperThresholdInheritance__private_IsEnabledPreCheck @ 0x1404CF690 (Feature_UpperThresholdInheritance__private_IsEnabledPreCheck.c)
 */

__int64 __fastcall PopConfigureHeteroThresholds(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v3; // r13
  unsigned __int8 v4; // r14
  unsigned __int8 v5; // r15
  char *v6; // r9
  __int64 v7; // r11
  unsigned __int8 v8; // si
  unsigned __int8 v9; // bp
  __int64 v10; // r10
  __int64 v12; // r12
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  unsigned __int8 v15; // cl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // r9
  _BYTE *v18; // r8
  unsigned __int8 v19; // r10
  __int64 v20; // r11
  unsigned __int8 v21; // cl
  __int64 v22; // rdx
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  unsigned __int8 v25; // cl
  __int64 result; // rax
  unsigned __int8 v27; // cl
  __int64 QueuedScb; // rdx
  __int64 OtherTransferCount; // rdx
  __int64 v30; // [rsp+60h] [rbp+18h]

  v3 = &unk_140E0B59C;
  v4 = 0;
  v30 = 7LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = a2;
  v9 = a2;
  LOBYTE(v10) = 0;
  do
  {
    v12 = *((unsigned int *)v3 - 1);
    if ( !*v3 )
    {
      v4 = 0;
      v5 = 0;
      v6 = 0LL;
      v8 = a2;
      v9 = a2;
    }
    if ( !(_DWORD)v12 )
    {
LABEL_9:
      v7 |= 0xC000000000000000uLL;
      v6 = (char *)PpmCurrentProfile + 712 * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40;
      LOBYTE(v10) = v10 | 3;
      goto LABEL_10;
    }
    if ( (_DWORD)v12 == 1 )
    {
      OtherTransferCount = *(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay;
      if ( !*(_QWORD *)&PopDirectedDripsDiagLock.ThreadTimerDelay )
        goto LABEL_10;
      goto LABEL_50;
    }
    if ( (_DWORD)v12 != 2 )
    {
      if ( (_DWORD)v12 != 3 )
      {
        switch ( (_DWORD)v12 )
        {
          case 4:
            goto LABEL_9;
          case 5:
            QueuedScb = (__int64)PopDirectedDripsDiagLock.QueuedScb;
            break;
          case 6:
            QueuedScb = PopDirectedDripsDiagLock.ReadTransferCount;
            break;
          default:
            goto LABEL_9;
        }
        goto LABEL_47;
      }
      OtherTransferCount = PopDirectedDripsDiagLock.OtherTransferCount;
      if ( !PopDirectedDripsDiagLock.OtherTransferCount )
        goto LABEL_9;
LABEL_50:
      v6 = (char *)(OtherTransferCount + 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40);
      v7 = *(_QWORD *)v6;
      v10 = *((_QWORD *)v6 + 1);
      goto LABEL_10;
    }
    QueuedScb = PopDirectedDripsDiagLock.WriteTransferCount;
LABEL_47:
    if ( QueuedScb )
    {
      v6 = (char *)(QueuedScb + 712LL * SHIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) + 40);
      v10 = *((_QWORD *)v6 + 1);
      v7 = *(_QWORD *)v6;
    }
LABEL_10:
    if ( v6 )
    {
      if ( (v7 & 0x4000000000000000LL) != 0 )
        v8 = v6[666];
      if ( v7 < 0 )
        v4 = v6[664];
      if ( (v10 & 1) != 0 )
        v9 = v6[667];
      if ( (v10 & 2) != 0 )
        v5 = v6[665];
    }
    v13 = v5;
    v14 = v4;
    if ( v5 > a2 )
      v13 = a2;
    v15 = v9;
    if ( v4 > a2 )
      v14 = a2;
    if ( v9 > a2 )
      v15 = a2;
    v9 = v15;
    v16 = v8;
    v5 = v9;
    if ( v8 > a2 )
      v16 = a2;
    *(_BYTE *)(a1 + 2 * v12 + 77) = v9;
    v8 = v16;
    *(_BYTE *)(a1 + 2 * v12 + 76) = v16;
    v4 = v16;
    if ( v14 <= v16 )
      v4 = v14;
    if ( v13 <= v9 )
      v5 = v13;
    *(_BYTE *)(a1 + 2 * v12 + 90) = v4;
    v3 += 8;
    *(_BYTE *)(a1 + 2 * v12 + 91) = v5;
    --v30;
  }
  while ( v30 );
  Feature_UpperThresholdInheritance__private_IsEnabledPreCheck();
  v17 = *(_BYTE *)(a1 + 76);
  v18 = &unk_140E0B5A4;
  v19 = *(_BYTE *)(a1 + 77);
  v20 = 6LL;
  do
  {
    if ( !*v18 )
    {
      v17 = *(_BYTE *)(a1 + 76);
      v19 = *(_BYTE *)(a1 + 77);
    }
    v21 = *(_BYTE *)(a1 + 2LL * *((unsigned int *)v18 - 1) + 76);
    v22 = *((unsigned int *)v18 - 1);
    if ( v21 >= v17 )
      v21 = v17;
    v17 = v21;
    v23 = *(_BYTE *)(a1 + 2 * v22 + 77);
    *(_BYTE *)(a1 + 2 * v22 + 76) = v17;
    if ( v23 >= v19 )
      v23 = v19;
    v24 = *(_BYTE *)(a1 + 2 * v22 + 90);
    v19 = v23;
    v25 = v17;
    *(_BYTE *)(a1 + 2 * v22 + 77) = v19;
    if ( v24 < v17 )
      v25 = v24;
    result = *(unsigned __int8 *)(a1 + 2 * v22 + 91);
    *(_BYTE *)(a1 + 2 * v22 + 90) = v25;
    v27 = v19;
    if ( (unsigned __int8)result < v19 )
      v27 = result;
    v18 += 8;
    *(_BYTE *)(a1 + 2 * v22 + 91) = v27;
    --v20;
  }
  while ( v20 );
  return result;
}
