/*
 * XREFs of ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x14012CF58
 * Callers:
 *     xxxInsertMenuItem @ 0x14003470C (xxxInsertMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x140049CF8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 * Callees:
 *     DesktopAlloc @ 0x14012D510 (DesktopAlloc.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall MNAllocMenuItems(__int64 **a1, unsigned __int8 a2)
{
  int v3; // r14d
  unsigned int v4; // esi
  _QWORD *v5; // rbp
  char *v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // r8
  signed int v11; // ecx
  __int64 v12; // rbx

  v3 = 16 * (a2 ^ 1) - 8;
  v4 = 0;
  v5 = (_QWORD *)Win32AllocPoolZInit(96LL * (unsigned int)(v3 + *(_DWORD *)(**a1 + 60)), 1953066325LL);
  if ( !v5 )
    return 0LL;
  v6 = (char *)DesktopAlloc(*(_QWORD *)(**a1 + 24), (unsigned int)(112 * (v3 + *(_DWORD *)(**a1 + 60))), 7LL);
  if ( !v6 )
  {
    Win32FreePool(v5);
    return 0LL;
  }
  if ( *(_QWORD *)(**a1 + 88) )
  {
    v11 = *(_DWORD *)(**a1 + 60);
    if ( v3 + v11 < (unsigned int)v11 )
      v11 += v3;
    v12 = v11;
    memmove(v5, *(const void **)(**a1 + 88), 96LL * v11);
    memmove(v6, *(const void **)(**a1 + 96), 112 * v12);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)(**a1 + 24) + 136LL), 0, *(PVOID *)(**a1 + 96));
    Win32FreePool(*(void **)(**a1 + 88));
  }
  if ( v3 + *(_DWORD *)(**a1 + 60) )
  {
    do
    {
      v7 = v4++;
      v8 = 12 * v7;
      v5[v8] = &v6[112 * v7];
      v5[v8 + 1] = v5[v8] - *(_QWORD *)(*(_QWORD *)(**a1 + 24) + 16LL);
    }
    while ( v4 < v3 + *(_DWORD *)(**a1 + 60) );
  }
  result = 1LL;
  *(_DWORD *)(**a1 + 60) += v3;
  v10 = **a1;
  *(_QWORD *)(*(_QWORD *)(v10 + 40) + 32LL) = v5[1];
  *(_QWORD *)(v10 + 88) = v5;
  *(_QWORD *)(**a1 + 96) = **(_QWORD **)(**a1 + 88);
  return result;
}
