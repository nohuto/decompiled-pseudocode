/*
 * XREFs of sub_140779364 @ 0x140779364
 * Callers:
 *     sub_1409E8670 @ 0x1409E8670 (sub_1409E8670.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 */

__int64 __fastcall sub_140779364(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, void *a5, size_t Size)
{
  char *v9; // r15
  unsigned int v10; // ebx
  unsigned int i; // edi
  __int64 v12; // rdi
  __int64 v13; // rax
  _QWORD *v14; // rdi
  unsigned int v15; // edi
  char *Src; // [rsp+60h] [rbp+8h] BYREF

  v9 = (char *)a5;
  v10 = 0;
  if ( *(_QWORD *)(a1 + 296) )
  {
    if ( (unsigned int)Size < 0x20 )
      return (unsigned int)-2147483643;
    a4[3] = *(_QWORD *)(a2 + 32);
  }
  for ( i = 0; i < (*(_DWORD *)(a1 + 324) >> 10) + 1; ++i )
    ProbeForWrite((volatile void *)(*a3 - (i << 10)), 8uLL, 1u);
  v12 = *a3;
  v13 = *a3 - 32;
  *a3 = v13;
  if ( (v13 & 0xF) != 0 )
    v14 = (_QWORD *)(v12 - 48);
  else
    v14 = (_QWORD *)(v12 - 40);
  *a3 = (__int64)v14;
  if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
  {
    Src = v9 + 16;
    RtlCopyToUser(v14, &Src, 8uLL);
  }
  else
  {
    *v14 = v9 + 16;
  }
  v15 = Size;
  if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
    RtlCopyToUser(v9, a4, v15);
  else
    memmove(v9, a4, v15);
  return v10;
}
