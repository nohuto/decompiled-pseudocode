/*
 * XREFs of sub_14003F724 @ 0x14003F724
 * Callers:
 *     sub_140054C80 @ 0x140054C80 (sub_140054C80.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140044864 @ 0x140044864 (sub_140044864.c)
 *     sub_14006C9D0 @ 0x14006C9D0 (sub_14006C9D0.c)
 *     sub_14006CDEC @ 0x14006CDEC (sub_14006CDEC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14003F724(__int64 a1, int a2)
{
  unsigned int v3; // esi
  int v4; // r14d
  int v5; // ecx
  int v6; // ecx
  const wchar_t *v7; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  const wchar_t *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  LOBYTE(v4) = 0;
  v5 = *(_DWORD *)(a1 + 16);
  if ( !v5 )
    goto LABEL_11;
  if ( !--v5 )
    goto LABEL_11;
  v6 = v5 - 1;
  if ( v6 )
  {
    v5 = v6 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        goto LABEL_12;
      goto LABEL_6;
    }
LABEL_11:
    v4 = *(_DWORD *)(a1 + 20);
    v3 = *(_DWORD *)(a1 + 24);
    goto LABEL_12;
  }
LABEL_6:
  v7 = L"Pro Audio";
  if ( !*(_DWORD *)(a1 + 108) )
    v7 = L"Audio";
  v11 = v7;
  v10 = 0LL;
  if ( (int)sub_140044864(&v10, &v11) >= 0 )
  {
    v3 = *(_DWORD *)(v10 + 16);
    v4 = *(_DWORD *)(v10 + 20);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
    try
    {
      v11 = (const wchar_t *)(a1 + 48);
      sub_14006C9D0(a1 + 88, &v10);
      sub_140018FF0((struct _RTL_CRITICAL_SECTION **)&v11);
    }
    catch ( ... )
    {
      return (unsigned int)sub_14004EEE4(retaddr, 179LL, "avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp");
    }
  }
  sub_140003238(&v10);
LABEL_12:
  if ( (byte_1400E8401 & 8) != 0 )
    sub_14006CDEC(v5, a2, a1, *(_DWORD *)(a1 + 16), v3, v4);
  return v3;
}
