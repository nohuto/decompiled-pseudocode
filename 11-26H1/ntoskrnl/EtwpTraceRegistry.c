/*
 * XREFs of EtwpTraceRegistry @ 0x140A099F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int16 v7; // r15
  unsigned int v10; // ebx
  bool i; // zf
  __int64 v12; // r10
  _DWORD *v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned int v16; // edx
  struct _KTHREAD *CurrentThread; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // [rsp+48h] [rbp-80h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-78h]
  int v23; // [rsp+60h] [rbp-68h]
  int v24; // [rsp+64h] [rbp-64h]
  __int64 v25; // [rsp+78h] [rbp-50h] BYREF
  int v26; // [rsp+80h] [rbp-48h]
  int v27; // [rsp+84h] [rbp-44h]
  __int64 v28; // [rsp+88h] [rbp-40h]
  __int64 v29; // [rsp+90h] [rbp-38h]

  v7 = a1;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4520);
  for ( i = !_BitScanForward((unsigned int *)&v12, v10); !i; i = !_BitScanForward((unsigned int *)&v12, v10) )
  {
    v10 &= v10 - 1;
    v13 = (_DWORD *)(EtwpHostSiloState + 32LL * (unsigned int)v12 + 4556);
    if ( v13 && (*v13 & 0x20000) != 0 )
    {
      v14 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4505);
      v15 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v12 + 4504);
      v29 = 0LL;
      v16 = 1;
      v26 = a3;
      v25 = *(_QWORD *)(a2 + 8 * v14 - 8);
      v21 = &v25;
      v27 = a4;
      v28 = a5;
      v22[0] = 24LL;
      if ( a6 )
      {
        v20 = *(_WORD *)a6 & 0xFFFE;
        if ( *(_QWORD *)(a6 + 8) )
        {
          if ( (*(_WORD *)a6 & 0xFFFE) != 0 )
          {
            v22[1] = *(_QWORD *)(a6 + 8);
            v16 = 2;
            v23 = v20;
            v24 = 0;
          }
        }
      }
      CurrentThread = KeGetCurrentThread();
      v18 = 2LL * v16;
      v19 = EtwpHostSiloState;
      v22[v18 - 1] = &EtwpNull;
      v22[v18] = 2LL;
      EtwpLogSystemEventUnsafe(v19, (__int64)&v21, (__int64)CurrentThread, v15, v16 + 1, v7 | 0x900, 0x601902u, 0);
    }
  }
}
