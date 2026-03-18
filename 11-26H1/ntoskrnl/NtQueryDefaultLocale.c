/*
 * XREFs of NtQueryDefaultLocale @ 0x1409EAB90
 * Callers:
 *     DifNtQueryDefaultLocaleWrapper @ 0x140681660 (DifNtQueryDefaultLocaleWrapper.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     PsGetSessionLocaleId @ 0x1409EABFC (PsGetSessionLocaleId.c)
 */

__int64 __fastcall NtQueryDefaultLocale(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // r9
  int SessionLocaleId; // eax
  int Src; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  Src = 0;
  LOBYTE(a2) = KeGetCurrentThread()->PreviousMode;
  if ( (_BYTE)a1 )
    SessionLocaleId = PsGetSessionLocaleId(a1, a2, a3, v3);
  else
    SessionLocaleId = PsDefaultSystemLocaleId;
  Src = SessionLocaleId;
  if ( (_BYTE)a2 )
    RtlWriteULongToUser(v3, SessionLocaleId);
  else
    RtlCopyVolatileMemory(v3, &Src, 4uLL);
  return 0LL;
}
