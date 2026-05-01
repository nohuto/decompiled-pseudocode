/*
 * XREFs of ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180285168
 * Callers:
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x18065BA7C (_lambda_b77313e954014d84b78f3886c1783ac6_--operator().c)
 * Callees:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18002D49C (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 */

__int64 __fastcall CSingleViewShellExperience::LaunchCore(
        CSingleViewShellExperience *this,
        HSTRING *a2,
        const unsigned __int16 *a3)
{
  int v3; // ebx
  unsigned int v5; // r15d
  int v6; // ebp
  const unsigned __int16 *StringRawBuffer; // rax
  int v9; // ecx
  int v10; // eax

  v3 = *((_DWORD *)this + 17);
  v5 = 0;
  v6 = *((_DWORD *)this + 33) & 2;
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, 0LL);
  v9 = (v6 == 0) | 0x80;
  if ( (v3 & 8) == 0 )
    v9 = v6 == 0;
  v10 = ActivateApplicationForExperienceWithPropertySet(
          StringRawBuffer,
          a3,
          (unsigned __int64)L"ShellExperience" & -(__int64)(v6 != 0),
          0LL,
          v9,
          (__int64)this + 56);
  if ( v10 < 0 )
    return (unsigned int)v10;
  return v5;
}
