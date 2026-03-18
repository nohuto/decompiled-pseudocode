/*
 * XREFs of ??_GCSharedSectionWrapperMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x14022AAB0
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

DirectComposition::CSharedSectionWrapperMarshaler *__fastcall DirectComposition::CSharedSectionWrapperMarshaler::`scalar deleting destructor'(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)this = &DirectComposition::CSharedSectionWrapperMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    GreDeleteFastMutex((char *)this, a2, a3, a4);
  return this;
}
