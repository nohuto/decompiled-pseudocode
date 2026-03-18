/*
 * XREFs of ??$SetInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18014D8F0
 * Callers:
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x18014D83C (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetInterface<CSharedSection,CSharedSection>(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+0h] [rbp+0h]

  *a1 = a2;
  if ( a2 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)(a2 + 8), 1u) <= 0 )
      return wil::details::in1diag3::Log_Hr(
               retaddr,
               (void *)0x18,
               (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
               (const char *)0x8007029CLL,
               a5);
  }
  return result;
}
