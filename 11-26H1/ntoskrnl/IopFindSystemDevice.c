/*
 * XREFs of IopFindSystemDevice @ 0x14079E1A0
 * Callers:
 *     IoQuerySystemDeviceName @ 0x140AFCA84 (IoQuerySystemDeviceName.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x140AEB728 (SiGetSystemDeviceName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFindSystemDevice(__int64 a1, _QWORD *a2)
{
  int SystemDeviceName; // eax
  int v4; // ebx
  __int64 Pool2; // rax
  void *v6; // rdi
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(a1);
  v8 = 0;
  SystemDeviceName = SiGetSystemDeviceName(SiGetSystemDisk, 0LL, 0LL, &v8);
  v4 = SystemDeviceName;
  if ( SystemDeviceName == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v6 = (void *)Pool2;
    if ( Pool2 )
    {
      v4 = SiGetSystemDeviceName(SiGetSystemDisk, Pool2, v8, &v8);
      if ( v4 >= 0 )
        *a2 = v6;
      else
        ExFreePoolWithTag(v6, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( SystemDeviceName >= 0 )
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v4;
}
