/*
 * XREFs of _CmQueryDevicePanelPldProperty @ 0x140A156F0
 * Callers:
 *     _CmUpdateDevicePanelInterface @ 0x140A151A0 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140A16A1C (_CmUpdateDevicePanel.c)
 * Callees:
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryDevicePanelPldProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        char *a4,
        __int64 a5,
        __int64 *a6,
        ULONG *a7,
        __int64 *a8,
        unsigned int *a9)
{
  int ObjectProperty; // eax
  unsigned int v14; // ecx
  ULONG v16; // eax
  __int64 Pool2; // rax
  unsigned int v18; // edx
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // [rsp+60h] [rbp-38h] BYREF
  int v22[3]; // [rsp+64h] [rbp-34h] BYREF

  *a8 = 0LL;
  *a9 = 0;
  v22[0] = 0;
  v21 = 0;
  while ( 1 )
  {
    ObjectProperty = PnpGetObjectProperty(a1, a2, a3, a4, 0LL, a5, v22, *a6, *a7, (__int64)&v21, 0);
    v14 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    v16 = v21;
    if ( v21 <= *a7 )
      return (unsigned int)-1073741823;
    if ( *a6 )
    {
      ExFreePoolWithTag((PVOID)*a6, 0);
      v16 = v21;
    }
    *a7 = v16;
    Pool2 = ExAllocatePool2(0x100uLL);
    *a6 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
  }
  if ( ObjectProperty < 0 )
    return v14;
  if ( v22[0] != 4099 )
    return (unsigned int)-1073741823;
  v18 = v21;
  if ( !v21 )
    return (unsigned int)-1073741823;
  v19 = *a6;
  v20 = *(_DWORD *)*a6 & 0x7F;
  if ( v20 && (v20 != 1 || v21 >= 0x10) && (v20 < 2 || v21 >= 0x14) && (*(_BYTE *)(v19 + 8) & 0x38u) < 0x30 )
  {
    *a8 = v19;
    *a9 = v18;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v14;
}
