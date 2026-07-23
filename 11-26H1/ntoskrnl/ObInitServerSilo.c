/*
 * XREFs of ObInitServerSilo @ 0x1407C5350
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     ObInitSystem @ 0x140D0F63C (ObInitSystem.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 */

int __fastcall ObInitServerSilo(PVOID Object)
{
  _QWORD *ServerSiloGlobals; // rax
  __int64 v3; // rdx
  _QWORD *v4; // r15
  _QWORD *v5; // rcx
  int result; // eax
  HANDLE v7; // rbx
  int v8; // r14d
  PVOID v9; // r14
  unsigned __int64 v10; // rbx
  _DWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v12; // [rsp+48h] [rbp-28h]
  __int64 *v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  __int128 v16; // [rsp+60h] [rbp-10h]
  PVOID Objecta; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  PVOID v19; // [rsp+B8h] [rbp+48h] BYREF

  v19 = 0LL;
  v11[1] = 0;
  v15 = 0;
  Handle = 0LL;
  Objecta = 0LL;
  ServerSiloGlobals = PsGetServerSiloGlobals((__int64)Object);
  v3 = 37LL;
  v4 = ServerSiloGlobals;
  v5 = ServerSiloGlobals + 16;
  ServerSiloGlobals[15] = 0LL;
  ServerSiloGlobals[90] = 0LL;
  do
  {
    v5[1] = v5;
    *v5 = v5;
    v5 += 2;
    --v3;
  }
  while ( v3 );
  if ( PsIsHostSilo((__int64)Object) )
    return 0;
  result = PsGetPermanentSiloContext((__int64)Object, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&Objecta);
  if ( result >= 0 )
  {
    result = ObOpenObjectByPointer(Objecta, 0x240u, 0LL, 2u, ObpDirectoryObjectType, 0, &Handle);
    if ( result >= 0 )
    {
      v7 = Handle;
      v13 = &ObpGlobalDirectoryName;
      v11[0] = 48;
      v12 = Handle;
      v14 = 576;
      v16 = 0LL;
      v8 = ObReferenceObjectByNameEx((unsigned int)v11, 0, 2, (_DWORD)ObpDirectoryObjectType, 0, 0LL, (__int64)&v19);
      ZwClose(v7);
      if ( v8 < 0 )
        return v8;
      v9 = v19;
      v10 = *((_QWORD *)v19 + 38);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 240), 0x10uLL) <= 0 )
        __fastfail(0xEu);
      *v4 = (v10 + 15) & ((unsigned __int128)-(__int128)v10 >> 64);
      ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
      *(_QWORD *)(v10 + 16) = Object;
      ObfDereferenceObject(v9);
      return 0;
    }
  }
  return result;
}
