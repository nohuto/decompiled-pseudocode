/*
 * XREFs of ??_E?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D7810
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ @ 0x1800D7310 (--1-$Module@$00VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAA@XZ.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::`vector deleting destructor'(
        Microsoft::WRL::Details *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        bool a4)
{
  char v4; // bl

  v4 = a2;
  Microsoft::WRL::Module<1,Windows::Internal::ServiceModule>::~Module<1,Windows::Internal::ServiceModule>(
    a1,
    a2,
    a3,
    a4);
  if ( (v4 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)8);
  return a1;
}
