/*
 * XREFs of UsbhSetPortData @ 0x14000E8D4
 * Callers:
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhRefPdo @ 0x1400107A0 (UsbhRefPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  signed __int32 v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rdi
  struct _KEVENT *v19; // rax
  __int64 v20; // rcx

  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 1952739443;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = a2;
        *(_QWORD *)(v9 + v8 + 24) = a3;
      }
    }
  }
  v10 = *(unsigned __int16 *)(PdoExt(a2) + 1428);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 880), 0xFFFFFFFF);
        v13 = *(_DWORD *)(v11 + 884);
        v14 = *(_QWORD *)(v11 + 888);
        v15 = 32LL * ((v12 - 1) & v13);
        *(_DWORD *)(v15 + v14) = 1348759667;
        *(_QWORD *)(v15 + v14 + 8) = 0LL;
        *(_QWORD *)(v15 + v14 + 16) = a2;
        *(_QWORD *)(v15 + v14 + 24) = v10;
      }
    }
  }
  v16 = PdoExt(a2);
  result = UsbhGetPortData(a1, *(unsigned __int16 *)(v16 + 1428));
  v18 = result;
  if ( result )
  {
    v19 = (struct _KEVENT *)PdoExt(a2);
    KeResetEvent(v19 + 54);
    result = UsbhRefPdo(v20, a2, 0LL, 1279349827LL);
    *(_QWORD *)(v18 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v18 + 428), 1);
      result = PdoExt(result);
      *(_DWORD *)(result + 1424) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v18 + 428), 0);
    }
  }
  return result;
}
