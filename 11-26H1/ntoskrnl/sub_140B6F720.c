/*
 * XREFs of sub_140B6F720 @ 0x140B6F720
 * Callers:
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x1404FA178 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     sub_1409EB1E8 @ 0x1409EB1E8 (sub_1409EB1E8.c)
 *     sub_1409ED2C4 @ 0x1409ED2C4 (sub_1409ED2C4.c)
 *     sub_140A89B4C @ 0x140A89B4C (sub_140A89B4C.c)
 */

__int64 __fastcall sub_140B6F720(int *a1, __int64 a2, __int64 a3)
{
  int v6; // r8d
  unsigned __int64 v7; // r9
  unsigned int v8; // ecx
  signed int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // esi
  SIZE_T v12; // r13
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  unsigned int v18; // r8d
  void *v19; // r15
  unsigned __int64 v20; // rax
  unsigned int v21; // r14d
  void **v22; // rsi

  v6 = *a1;
  if ( *a1 == 1 )
  {
    v7 = 16LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v8 = -1;
    if ( v7 <= 0xFFFFFFFF )
      v8 = v7;
    v9 = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v7 > 0xFFFFFFFF )
      goto LABEL_38;
    v10 = v8 + 248;
    v11 = -1;
    if ( v8 + 248 >= v8 )
      v11 = v8 + 248;
    v9 = v10 < v8 ? 0xC0000095 : 0;
    if ( v10 < v8 )
      goto LABEL_38;
    v12 = 248LL;
  }
  else
  {
    if ( v6 )
    {
      v9 = -1073741811;
      goto LABEL_38;
    }
    v13 = 12LL * *(unsigned int *)(*((_QWORD *)a1 + 1) + 240LL);
    v14 = -1;
    if ( v13 <= 0xFFFFFFFF )
      v14 = v13;
    v9 = v13 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v13 > 0xFFFFFFFF )
      goto LABEL_38;
    v15 = v14 + 244;
    v11 = -1;
    if ( v14 + 244 >= v14 )
      v11 = v14 + 244;
    v9 = v15 < v14 ? 0xC0000095 : 0;
    if ( v15 < v14 )
      goto LABEL_38;
    v12 = 244LL;
  }
  *(_DWORD *)(a3 + 48) = v6;
  *(_DWORD *)(a3 + 52) = a1[1];
  v9 = sub_140A89B4C(v11, (_QWORD *)(a3 + 56));
  if ( v9 >= 0 )
  {
    if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
    {
      RtlCopyFromUser(*(void **)(a3 + 56), *(void **)(a2 + 8), v11);
    }
    else
    {
      ProbeForRead(*(volatile void **)(a2 + 8), v11, 1u);
      memmove(*(void **)(a3 + 56), *(const void **)(a2 + 8), v11);
    }
    v9 = sub_1409ED2C4(*(PVOID *)(a2 + 8), v11, 1);
    if ( v9 >= 0 )
    {
      v9 = sub_1409EB1E8(*(UCHAR **)(a3 + 56), v11);
      if ( v9 >= 0 )
      {
        if ( RtlCompareMemory(*((const void **)a1 + 1), *(const void **)(a3 + 56), v12) != v12 )
        {
          v9 = -1073741811;
          goto LABEL_38;
        }
        if ( *(_DWORD *)(a3 + 48) > 1u )
        {
          v9 = -1073741811;
          goto LABEL_38;
        }
        v16 = *(_DWORD **)(a3 + 56);
        v17 = *(_QWORD *)(a2 + 8) - (v16[10] & 0xFFFFFFF);
        *(_QWORD *)(a3 + 32) = v17;
        v18 = v16[12];
        if ( !v18 )
        {
LABEL_35:
          *(_DWORD *)(a3 + 16) = 1;
          goto LABEL_38;
        }
        v19 = (void *)(v17 + (v16[11] & 0xFFFFFFF));
        v20 = 4LL * v18;
        v21 = -1;
        if ( v20 <= 0xFFFFFFFF )
          v21 = 4 * v18;
        v9 = v20 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v20 <= 0xFFFFFFFF )
        {
          v22 = (void **)(a3 + 40);
          if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
          {
            v9 = sub_140A89B4C(v21, (_QWORD *)(a3 + 40));
            if ( v9 < 0 )
              goto LABEL_38;
            RtlCopyFromUser(*v22, v19, v21);
          }
          else
          {
            ProbeForRead(v19, v21, 1u);
            v9 = sub_140A89B4C(v21, (_QWORD *)(a3 + 40));
            if ( v9 < 0 )
              goto LABEL_38;
            memmove(*v22, v19, v21);
          }
          goto LABEL_35;
        }
      }
    }
  }
LABEL_38:
  *(_DWORD *)(a3 + 20) = v9;
  return (unsigned int)v9;
}
