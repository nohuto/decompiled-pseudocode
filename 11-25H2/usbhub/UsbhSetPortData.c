/*
 * XREFs of UsbhSetPortData @ 0x140015D80
 * Callers:
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     UsbhRefPdo @ 0x140017710 (UsbhRefPdo.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdi
  struct _KEVENT *v13; // rax
  __int64 v14; // rcx

  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_DWORD *)v6 = 1952739443;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = a3;
      }
    }
  }
  v7 = *((unsigned __int16 *)PdoExt(a2) + 714);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1348759667;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v7;
      }
    }
  }
  v10 = PdoExt(a2);
  result = UsbhGetPortData(a1, *((_WORD *)v10 + 714));
  v12 = result;
  if ( result )
  {
    v13 = (struct _KEVENT *)PdoExt(a2);
    KeResetEvent(v13 + 54);
    result = UsbhRefPdo(v14, a2, 0LL, 1279349827LL);
    *(_QWORD *)(v12 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v12 + 428), 1);
      result = (__int64)PdoExt(result);
      *(_DWORD *)(result + 1424) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v12 + 428), 0);
    }
  }
  return result;
}
