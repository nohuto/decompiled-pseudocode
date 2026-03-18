/*
 * XREFs of ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1400A5720
 * Callers:
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1400A55BC (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?InsertAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAJAEBUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@I@Z @ 0x1400A5F4C (-InsertAt@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@Direct.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  int v13; // edx
  char *v14; // rcx
  char *v15; // rcx
  char *v16; // rcx
  unsigned __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  int v18; // [rsp+28h] [rbp-8h]

  v5 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( (_DWORD)v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)(v7 - 1);
      if ( (_DWORD)v8 )
      {
        v13 = v8 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
          {
            *(_DWORD *)(a1 + 12) |= 0x10u;
            v17 = 0xFFFFFFFF00000001uLL;
            *(_QWORD *)(a1 + 88) = 0xFFFFFFFF00000001uLL;
            *(_DWORD *)(a1 + 96) = -805306369;
          }
          else
          {
            return (unsigned int)-1073741811;
          }
        }
        else
        {
          *(_DWORD *)(a1 + 12) |= 1u;
          *(_DWORD *)(a1 + 84) = -805306369;
        }
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
        {
          v14 = *(char **)(*(_QWORD *)(a1 + 64) + 8 * i);
          if ( v14 )
            GreDeleteFastMutex(v14, v8, a3, a4);
        }
        *(_DWORD *)(a1 + 72) = 0;
        v17 = 0xFFFFFFFF00000001uLL;
        v18 = -805306369;
        v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
               a1 + 64,
               &v17,
               0LL);
        if ( v5 >= 0 )
        {
          *(_DWORD *)(a1 + 12) |= 2u;
          *(_DWORD *)(a1 + 80) = 0;
        }
      }
    }
    else
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 48); j = (unsigned int)(j + 1) )
      {
        v15 = *(char **)(*(_QWORD *)(a1 + 40) + 8 * j);
        if ( v15 )
          GreDeleteFastMutex(v15, v7, a3, a4);
      }
      *(_DWORD *)(a1 + 48) = 0;
      v17 = 0xFFFFFFFF00000001uLL;
      v18 = -805306369;
      v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
             a1 + 40,
             &v17,
             0LL);
      if ( v5 >= 0 )
      {
        *(_DWORD *)(a1 + 12) |= 8u;
        *(_DWORD *)(a1 + 56) = 0;
      }
    }
  }
  else
  {
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(a1 + 24); k = (unsigned int)(k + 1) )
    {
      v16 = *(char **)(*(_QWORD *)(a1 + 16) + 8 * k);
      if ( v16 )
        GreDeleteFastMutex(v16, v6, a3, a4);
    }
    *(_DWORD *)(a1 + 24) = 0;
    v17 = 0xFFFFFFFF00000001uLL;
    v18 = -805306369;
    v5 = CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
           a1 + 16,
           &v17,
           0LL);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 12) |= 4u;
      *(_DWORD *)(a1 + 32) = 0;
    }
  }
  return (unsigned int)v5;
}
