/*
 * XREFs of KiUpdateProcessThreadQos @ 0x140204184
 * Callers:
 *     KeSetProcessPpmPolicy @ 0x140203314 (KeSetProcessPpmPolicy.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiReleaseThreadStateLock @ 0x140305180 (KiReleaseThreadStateLock.c)
 *     KiComputeThreadQos @ 0x140306EE0 (KiComputeThreadQos.c)
 *     KiAcquireThreadStateLockForWrite @ 0x1403342E0 (KiAcquireThreadStateLockForWrite.c)
 *     KiUpdateThreadQosGroupingSummaries @ 0x140380C70 (KiUpdateThreadQosGroupingSummaries.c)
 */

void __fastcall KiUpdateProcessThreadQos(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *i; // rdi
  int v3; // eax
  char v4; // si
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  _BYTE *v9; // rax
  __int64 *v10; // rsi
  __int64 v11; // r15
  volatile signed __int32 *v12; // rbx
  int v13; // ecx
  _BYTE *v14; // rax
  __int64 *v15; // rsi
  __int64 v16; // r15
  _OWORD v17[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v1 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v1; i = (_QWORD *)*i )
  {
    v12 = (volatile signed __int32 *)(i - 95);
    LODWORD(v19) = 0;
    while ( _interlockedbittestandset64(v12 + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19);
      while ( *((_QWORD *)v12 + 8) );
    }
    v3 = KiComputeThreadQos(i - 95);
    v4 = v3;
    if ( v3 != *((unsigned __int8 *)v12 + 516) )
    {
      memset(v17, 0, sizeof(v17));
      v18 = 0LL;
      v5 = KiAcquireThreadStateLockForWrite(i - 95, v17);
      *((_BYTE *)v12 + 516) = v4;
      v7 = v5 - 2;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          v13 = *((_DWORD *)v12 + 30) >> 1;
          v19 = *(_QWORD *)&v17[0];
          v6 = v13 & 1;
          if ( (_DWORD)v6 )
          {
            if ( (_DWORD)v6 != 1 )
              goto LABEL_10;
            v14 = *(_BYTE **)(*(_QWORD *)&v17[0] + 36504LL);
            v6 = (unsigned __int8)*v14;
            v15 = (__int64 *)(v14 + 8);
            if ( !*v14 )
              goto LABEL_10;
          }
          else
          {
            v15 = &v19;
            LODWORD(v6) = 1;
          }
          v16 = (unsigned int)v6;
          do
          {
            *(_BYTE *)(*(_QWORD *)(*v15 + 56) + 64LL) ^= (*((_BYTE *)v12 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v15 + 56)
                                                                                           + 64LL)) & 7;
            KiUpdateThreadQosGroupingSummaries();
            ++v15;
            --v16;
          }
          while ( v16 );
        }
      }
      else if ( !*(_QWORD *)(*(_QWORD *)&v17[0] + 16LL) )
      {
        v8 = *((_DWORD *)v12 + 30) >> 1;
        v19 = *(_QWORD *)&v17[0];
        v6 = v8 & 1;
        if ( !(_DWORD)v6 )
        {
          v10 = &v19;
          LODWORD(v6) = 1;
          goto LABEL_8;
        }
        if ( (_DWORD)v6 == 1 )
        {
          v9 = *(_BYTE **)(*(_QWORD *)&v17[0] + 36504LL);
          v6 = (unsigned __int8)*v9;
          v10 = (__int64 *)(v9 + 8);
          if ( *v9 )
          {
LABEL_8:
            v11 = (unsigned int)v6;
            do
            {
              *(_BYTE *)(*(_QWORD *)(*v10 + 56) + 64LL) ^= (*((_BYTE *)v12 + 516) ^ *(_BYTE *)(*(_QWORD *)(*v10 + 56)
                                                                                             + 64LL)) & 7;
              KiUpdateThreadQosGroupingSummaries();
              ++v10;
              --v11;
            }
            while ( v11 );
          }
        }
      }
LABEL_10:
      KiReleaseThreadStateLock(v6, v17);
    }
    *((_QWORD *)v12 + 8) = 0LL;
  }
}
