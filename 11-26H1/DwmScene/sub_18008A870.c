/*
 * XREFs of sub_18008A870 @ 0x18008A870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800587B0 @ 0x1800587B0 (sub_1800587B0.c)
 *     sub_1800602C4 @ 0x1800602C4 (sub_1800602C4.c)
 */

__int64 __fastcall sub_18008A870(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = sub_180012C40(&v8, a2);
  sub_1800587B0(a1, v4);
  sub_1800602C4(&v8, a2);
  v5 = v8;
  *(_DWORD *)(v8 + 1800) = *(_DWORD *)(a1 + 1800);
  *(_DWORD *)(v5 + 1804) = *(_DWORD *)(a1 + 1804);
  *(_DWORD *)(v5 + 1808) = *(_DWORD *)(a1 + 1808);
  *(_DWORD *)(v5 + 1812) = *(_DWORD *)(a1 + 1812);
  *(_DWORD *)(v5 + 1816) = *(_DWORD *)(a1 + 1816);
  *(_DWORD *)(v5 + 1820) = *(_DWORD *)(a1 + 1820);
  *(_DWORD *)(v5 + 1824) = *(_DWORD *)(a1 + 1824);
  *(_DWORD *)(v5 + 1828) = *(_DWORD *)(a1 + 1828);
  *(_DWORD *)(v5 + 1832) = *(_DWORD *)(a1 + 1832);
  *(_DWORD *)(v5 + 1836) = *(_DWORD *)(a1 + 1836);
  *(_DWORD *)(v5 + 1840) = *(_DWORD *)(a1 + 1840);
  *(_DWORD *)(v5 + 1844) = *(_DWORD *)(a1 + 1844);
  *(_DWORD *)(v5 + 1848) = *(_DWORD *)(a1 + 1848);
  *(_DWORD *)(v5 + 1852) = *(_DWORD *)(a1 + 1852);
  *(_DWORD *)(v5 + 1856) = *(_DWORD *)(a1 + 1856);
  *(_DWORD *)(v5 + 1860) = *(_DWORD *)(a1 + 1860);
  *(_BYTE *)(v5 + 1864) = *(_BYTE *)(a1 + 1864);
  *(_DWORD *)(v5 + 1868) = *(_DWORD *)(a1 + 1868);
  *(_DWORD *)(v5 + 1872) = *(_DWORD *)(a1 + 1872);
  *(_DWORD *)(v5 + 1876) = *(_DWORD *)(a1 + 1876);
  *(_DWORD *)(v5 + 1880) = *(_DWORD *)(a1 + 1880);
  *(_DWORD *)(v5 + 1884) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(v5 + 1888) = *(_DWORD *)(a1 + 1888);
  *(_DWORD *)(v5 + 1892) = *(_DWORD *)(a1 + 1892);
  *(_BYTE *)(v5 + 1896) = *(_BYTE *)(a1 + 1896);
  *(_BYTE *)(v5 + 1897) = *(_BYTE *)(a1 + 1897);
  *(_BYTE *)(v5 + 1898) = *(_BYTE *)(a1 + 1898);
  result = *(unsigned int *)(a1 + 1900);
  *(_DWORD *)(v5 + 1900) = result;
  if ( v9 )
    result = sub_180010EC8(v9);
  v7 = a2[1];
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
