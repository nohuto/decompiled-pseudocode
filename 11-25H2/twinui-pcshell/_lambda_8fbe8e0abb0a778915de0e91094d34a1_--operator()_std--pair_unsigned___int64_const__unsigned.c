/*
 * XREFs of _lambda_8fbe8e0abb0a778915de0e91094d34a1_::operator()_std::pair_unsigned___int64_const__unsigned___int64__&_ @ 0x180061F78
 * Callers:
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180061EFC (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 * Callees:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800620F4 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 */

__int64 __fastcall lambda_8fbe8e0abb0a778915de0e91094d34a1_::operator()_std::pair_unsigned___int64_const__unsigned___int64____(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  __int64 v4; // r8
  _QWORD *v5; // r11
  unsigned __int64 i; // r9
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned __int64 j; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx

  v2 = *a1;
  v3 = 0xCBF29CE484222325uLL;
  v4 = 0xCBF29CE484222325uLL;
  v5 = a2;
  for ( i = 0LL; i < 8; ++i )
  {
    v8 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v8 ^ v4);
  }
  v9 = *(_QWORD *)(v2 + 632);
  v10 = v4 & *(_QWORD *)(v2 + 672);
  v11 = *(_QWORD *)(v2 + 648);
  v12 = 2 * v10;
  result = *(_QWORD *)(v11 + 8 * v12 + 8);
  if ( result == v9 )
  {
LABEL_8:
    result = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v11 + 8 * v12);
    while ( *a2 != *(_QWORD *)(result + 16) )
    {
      if ( result == v14 )
        goto LABEL_8;
      result = *(_QWORD *)(result + 8);
    }
  }
  if ( !result )
    result = *(_QWORD *)(v2 + 632);
  if ( result != v9 )
  {
    for ( j = 0LL; j < 8; ++j )
    {
      v16 = *((unsigned __int8 *)a2 + j);
      v3 = 0x100000001B3LL * (v16 ^ v3);
    }
    v17 = *(_QWORD *)(v11 + 16 * (v3 & *(_QWORD *)(v2 + 672)) + 8);
    if ( v17 == v9 )
      goto LABEL_21;
    v18 = *(_QWORD *)(v11 + 16 * (v3 & *(_QWORD *)(v2 + 672)));
    v19 = *a2;
    while ( 1 )
    {
      if ( v19 == *(_QWORD *)(v17 + 16) )
      {
        if ( v17 )
        {
          result = winrt::Windows::Internal::Shell::implementation::WindowData::SyncWindowTabDataModel(
                     v17 + 24,
                     *(unsigned int *)(v2 + 792),
                     v5[1]);
          *(_QWORD *)a1[1] += result;
          return result;
        }
      }
      else if ( v17 != v18 )
      {
        goto LABEL_22;
      }
LABEL_21:
      std::_Xout_of_range("invalid unordered_map<K, T> key");
      __debugbreak();
LABEL_22:
      v17 = *(_QWORD *)(v17 + 8);
    }
  }
  return result;
}
