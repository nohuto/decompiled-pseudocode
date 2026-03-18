/*
 * XREFs of _CmGetDeviceSiblings @ 0x140A92DFC
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x140992EEC (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     _CmGetDeviceParent @ 0x140991D0C (_CmGetDeviceParent.c)
 *     _PnpMultiSzGetLen @ 0x140992C5C (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceChildren @ 0x140A92F7C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzDeleteString @ 0x140A932B8 (_PnpMultiSzDeleteString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r14
  unsigned int v8; // r12d
  unsigned int DeviceParent; // edi
  _WORD *Pool2; // rbx
  int DeviceChildren; // eax
  unsigned int Len; // eax
  unsigned int v14[4]; // [rsp+20h] [rbp-1F8h] BYREF
  wchar_t v15[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  if ( a3 )
  {
    if ( *a4 )
      *a3 = 0;
    else
      v5 = 0LL;
  }
  else
  {
    *a4 = 0;
  }
  v8 = *a4;
  *a4 = 0;
  v14[0] = 200;
  DeviceParent = CmGetDeviceParent(a1, a2, v15, v14);
  if ( (DeviceParent & 0x80000000) == 0 )
  {
    Pool2 = 0LL;
    v14[0] = 0;
    do
    {
      DeviceChildren = CmGetDeviceChildren(a1, v15, Pool2, v14);
      DeviceParent = DeviceChildren;
      if ( DeviceChildren != -1073741789 )
      {
        if ( DeviceChildren < 0 )
        {
          if ( !Pool2 )
            return DeviceParent;
        }
        else
        {
          if ( !Pool2 )
            return (unsigned int)-1073741275;
          if ( (unsigned __int8)PnpMultiSzDeleteString(Pool2, a2) )
          {
            Len = PnpMultiSzGetLen(Pool2);
            if ( Len <= 1 )
            {
              DeviceParent = -1073741275;
            }
            else
            {
              *a4 = Len;
              if ( v8 >= Len )
                memmove(v5, Pool2, 2LL * Len);
              else
                DeviceParent = -1073741789;
            }
          }
          else
          {
            DeviceParent = -1073741595;
          }
        }
        ExFreePoolWithTag(Pool2, 0);
        return DeviceParent;
      }
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    }
    while ( Pool2 );
    return (unsigned int)-1073741801;
  }
  return DeviceParent;
}
