/*
 * XREFs of ??_G?$_Ref_count_resource@PEAVDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@std@@UEAAPEAXI@Z @ 0x18003F710
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_resource<DuckingDescriptor *,std::default_delete<DuckingDescriptor>>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
