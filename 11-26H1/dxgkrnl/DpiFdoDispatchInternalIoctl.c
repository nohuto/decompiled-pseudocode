/*
 * XREFs of DpiFdoDispatchInternalIoctl @ 0x140240590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     DpiSharedPowerRegister @ 0x140249A00 (DpiSharedPowerRegister.c)
 */

__int64 __fastcall DpiFdoDispatchInternalIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r14
  __int64 v5; // rbx
  int v6; // edi
  int v7; // edx
  unsigned int v8; // r8d
  __int64 *v9; // rsi
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // r13
  PRKMUTEX v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // r14
  _DWORD *v16; // rax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r13
  unsigned int i; // esi
  __int64 (__fastcall *v22)(__int64, __int64 *); // rax
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  PRKMUTEX Mutex; // [rsp+88h] [rbp+48h]
  PERESOURCE Resource; // [rsp+90h] [rbp+50h]

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = -1073741637;
  v24 = 0LL;
  v7 = *(_DWORD *)(v2 + 24);
  v8 = *(_DWORD *)(v2 + 16);
  v9 = *(__int64 **)(v2 + 32);
  switch ( v7 )
  {
    case 2302031:
      if ( v8 >= 0x10 && v9 )
      {
        Mutex = (PRKMUTEX)(v4 + 3720);
        KeWaitForSingleObject((PVOID)(v4 + 3720), Executive, 0, 0, 0LL);
        v19 = v9[1];
        v6 = 0;
        v20 = *v9;
        for ( i = 0; i < *(_DWORD *)(v4 + 2708); ++i )
        {
          v22 = *(__int64 (__fastcall **)(__int64, __int64 *))v19;
          v24 = 0LL;
          v6 = v22(v20, &v24);
          if ( v6 < 0 )
            break;
          *(_DWORD *)v24 = i;
          *(_DWORD *)(v24 + 4) = 0;
          v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v19 + 8))(v20, v24);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(__int64, __int64))(v19 + 16))(v20, v24);
            break;
          }
        }
        KeReleaseMutex(Mutex, 0);
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2530;
      }
      break;
    case 2302035:
      if ( v8 >= 0x10 && v9 )
      {
        v11 = v9[1];
        v6 = 0;
        v12 = *v9;
        KeEnterCriticalRegion();
        Resource = (PERESOURCE)(v4 + 3440);
        ExAcquireResourceSharedLite((PERESOURCE)(v4 + 3440), 1u);
        v13 = (PRKMUTEX)(v4 + 3600);
        v14 = *(_QWORD **)(v4 + 3600);
        Mutex = (PRKMUTEX)(v4 + 3600);
        while ( 1 )
        {
          v15 = v14;
          if ( v14 == (_QWORD *)v13 )
            break;
          v16 = v14 - 4;
          v14 = (_QWORD *)*v14;
          v24 = 0LL;
          v17 = *v16 == 1;
          v13 = Mutex;
          if ( v17 )
          {
            v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))v11)(v12, &v24);
            if ( v6 < 0 )
              break;
            v18 = *((int *)v15 - 4);
            if ( *((_DWORD *)v15 - 4) == 1 || (unsigned int)(*((_DWORD *)v15 - 4) - 3) < 2 )
            {
              *(_DWORD *)(v24 + 8) = v18;
            }
            else
            {
              WdLogSingleEntry2(2LL, v18, -1073741811LL);
              WdLogGlobalForLineNumber = 2702;
            }
            *(_DWORD *)v24 = *((_DWORD *)v15 - 2);
            *(_DWORD *)(v24 + 4) = *((_DWORD *)v15 - 7);
            *(_DWORD *)(v24 + 12) = *((_DWORD *)v15 - 6);
            *(_BYTE *)(v24 + 16) = *((_BYTE *)v15 - 20);
            v6 = (*(__int64 (__fastcall **)(__int64, __int64))(v11 + 8))(v12, v24);
            v13 = Mutex;
            if ( v6 < 0 )
            {
              (*(void (__fastcall **)(__int64, __int64))(v11 + 16))(v12, v24);
              break;
            }
          }
        }
        ExReleaseResourceLite(Resource);
        KeLeaveCriticalRegion();
      }
      else
      {
        v6 = -1073741789;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2627;
      }
      break;
    case 2304007:
      v10 = DpiSharedPowerRegister(
              a1,
              2304007,
              (_DWORD)v9,
              v8,
              *(_QWORD *)(a2 + 112),
              *(_DWORD *)(v2 + 8),
              (__int64)&v24);
      v5 = v24;
      v6 = v10;
      break;
    default:
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2753;
      break;
  }
  *(_DWORD *)(a2 + 48) = v6;
  *(_QWORD *)(a2 + 56) = v5;
  IofCompleteRequest((PIRP)a2, 1);
  return (unsigned int)v6;
}
