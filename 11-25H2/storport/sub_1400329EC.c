/*
 * XREFs of sub_1400329EC @ 0x1400329EC
 * Callers:
 *     EnableCallback @ 0x1400328B0 (EnableCallback.c)
 * Callees:
 *     sub_140012944 @ 0x140012944 (sub_140012944.c)
 *     sub_1400129E0 @ 0x1400129E0 (sub_1400129E0.c)
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140032CB4 @ 0x140032CB4 (sub_140032CB4.c)
 *     sub_140033D74 @ 0x140033D74 (sub_140033D74.c)
 *     sub_140033DA4 @ 0x140033DA4 (sub_140033DA4.c)
 *     sub_140033E20 @ 0x140033E20 (sub_140033E20.c)
 *     sub_14005595C @ 0x14005595C (sub_14005595C.c)
 *     sub_140055C5C @ 0x140055C5C (sub_140055C5C.c)
 */

__int64 __fastcall sub_1400329EC(__int64 a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  char v7; // r14
  bool v8; // al
  bool v9; // al
  bool v10; // al
  __int64 result; // rax
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 *v14; // rdi
  __int64 *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 *v18; // r14
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 *v24; // rsi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v26; // [rsp+90h] [rbp+8h]
  char v27; // [rsp+98h] [rbp+10h]
  __int64 v28; // [rsp+A8h] [rbp+20h]

  v27 = a2;
  v6 = 0LL;
  v26 = 0LL;
  byte_140168DAA = a2 != 0;
  v7 = a2;
  qword_140168DA0 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (*(_QWORD *)&a4 & 0x100000LL) != 0 && a6 && *(_DWORD *)(a6 + 8) == 8 )
    qword_140168DA0 = **(_QWORD **)a6;
  v8 = (byte_1401694F4 & 0x10) != 0
    || (((byte_1401694F4 & 0x90) == 0) & (unsigned __int8)~((unsigned __int8)byte_1401694F5 >> 2)) == 0;
  byte_140168DAB = v8;
  v9 = (byte_1401694F5 & 0x30) != 0 || (byte_1401694F6 & 0x10) != 0;
  byte_140168DAC = v9;
  byte_140168DA9 = (byte_1401694F3 & 0x10) != 0;
  v10 = (byte_1401694F1 & 1) != 0 || (byte_1401694F3 & 2) != 0;
  byte_140168DA8 = v10;
  result = sub_140033DA4();
  v28 = result;
  v12 = result;
  if ( result )
  {
    v13 = result + 8;
    v14 = *(__int64 **)(result + 8);
    while ( v14 != (__int64 *)v13 )
    {
      v15 = 0LL;
      v16 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v14 + 7, &LockHandle);
      if ( *((_DWORD *)v14 + 12) )
      {
        v18 = v14 + 4;
        v19 = (__int64 *)v14[4];
        if ( v19 != v14 + 4 )
        {
          do
          {
            if ( *((_DWORD *)v19 - 16) == 1094997074 )
            {
              LOBYTE(v17) = v27;
              v6 = v19 - 8;
              if ( (unsigned __int8)sub_140032CB4(v19 - 8, v17) )
                v16 = (unsigned int)(v16 + 1);
            }
            v19 = (__int64 *)*v19;
          }
          while ( v19 != v18 );
          v12 = v28;
          v26 = v6;
          if ( (_DWORD)v16 )
          {
            v15 = (__int64 *)sub_1400143E0(64LL, 8LL * (unsigned int)v16, 1413833042LL, v6[1]);
            if ( v15 )
            {
              v21 = (__int64 *)*v18;
              v22 = 0LL;
              if ( (__int64 *)*v18 != v18 )
              {
                do
                {
                  if ( (unsigned int)v22 >= (unsigned int)v16 )
                    break;
                  v26 = v21 - 8;
                  if ( *((_DWORD *)v21 - 16) == 1094997074 )
                  {
                    LOBYTE(v20) = v27;
                    if ( (unsigned __int8)sub_140032CB4(v21 - 8, v20) )
                    {
                      if ( (int)sub_140033D74(v21 - 8) >= 0 )
                      {
                        v15[v22] = (__int64)(v21 - 8);
                        v22 = (unsigned int)(v22 + 1);
                      }
                    }
                  }
                  v21 = (__int64 *)*v21;
                }
                while ( v21 != v18 );
                v12 = v28;
                v13 = v28 + 8;
              }
              v16 = (unsigned int)v22;
            }
          }
        }
        v7 = v27;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v15 )
      {
        if ( (_DWORD)v16 )
        {
          v24 = v15;
          do
          {
            LOBYTE(v23) = v7;
            sub_140055C5C(*v24, v23);
            sub_14005595C(*v24);
            sub_1400129E0(*v24);
            sub_140012944(*v24);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*v24++ + 336));
            --v16;
          }
          while ( v16 );
        }
        ExFreePoolWithTag(v15, 0x54456152u);
      }
      v14 = (__int64 *)*v14;
      v6 = v26;
    }
    return sub_140033E20(v12);
  }
  return result;
}
