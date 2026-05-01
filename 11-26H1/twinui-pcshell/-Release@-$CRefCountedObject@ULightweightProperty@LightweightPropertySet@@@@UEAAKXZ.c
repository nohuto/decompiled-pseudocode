/*
 * XREFs of ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x180203D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release(void *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 6);
  if ( !v2 && a1 )
  {
    Windows::Internal::String::~String((HSTRING *)a1 + 1);
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
