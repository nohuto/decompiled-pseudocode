/*
 * XREFs of ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1805265E4
 * Callers:
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180525D94 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 *     ?PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z @ 0x180527490 (-PlaceModeMouseOver@CDragVisualAcc@@UEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180053C64 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_180053C64.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@IG@Z @ 0x1801E97E4 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHI.c)
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180510B08 (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall GenerateDropEffectPlaceMode(__int64 a1, int a2, _QWORD *a3)
{
  char v5; // di
  char v6; // r14
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ebx
  unsigned int v11; // r8d
  int v12; // eax
  const void *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]

  *a3 = 0LL;
  v5 = 1;
  v6 = 0;
  if ( a2 )
  {
    v7 = a2 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            return (unsigned int)-2147024809;
          v11 = 2102;
        }
        else
        {
          v11 = 2101;
        }
      }
      else
      {
        v11 = 2103;
      }
    }
    else
    {
      v11 = 2105;
      v5 = 0;
    }
  }
  else
  {
    v11 = 2104;
    v6 = 1;
  }
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
          (__int64)&v14,
          &_ImageBase,
          v11);
  if ( v10 >= 0 )
  {
    if ( v5 )
    {
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      if ( v6 )
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
                (__int64)&v17,
                v14,
                a1);
      else
        v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                (__int64)&v17,
                (const wchar_t *)v14,
                a1);
      v10 = v12;
      if ( v12 >= 0 )
      {
        *a3 = v17;
        v17 = 0LL;
        v19 = 0LL;
        v18 = 0LL;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v17);
    }
    else
    {
      *a3 = v14;
      v14 = 0LL;
      v16 = 0LL;
      v15 = 0LL;
    }
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
  return (unsigned int)v10;
}
