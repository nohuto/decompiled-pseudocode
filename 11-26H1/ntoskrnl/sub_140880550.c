/*
 * XREFs of sub_140880550 @ 0x140880550
 * Callers:
 *     sub_140B38E0C @ 0x140B38E0C (sub_140B38E0C.c)
 * Callees:
 *     Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline @ 0x140500988 (Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     SddlpFree @ 0x1409ED230 (SddlpFree.c)
 *     sub_140A847CC @ 0x140A847CC (sub_140A847CC.c)
 */

__int64 __fastcall sub_140880550(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  int v8; // eax
  void *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( a3 >= 0x10 && *(_QWORD *)a2 == 8LL )
  {
    v5 = sub_140A847CC(24LL, &v10);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)Feature_WBAccessors__private_IsEnabledDeviceUsageNoInline() )
      {
        RtlCopyFromUser(v10, *(void **)(a2 + 8), 0x18uLL);
      }
      else
      {
        ProbeForRead(*(volatile void **)(a2 + 8), 0x18uLL, 1u);
        v6 = *(_QWORD *)(a2 + 8);
        v7 = v10;
        *(_OWORD *)v10 = *(_OWORD *)v6;
        v7[2] = *(_QWORD *)(v6 + 16);
      }
      if ( *(_DWORD *)v10 )
      {
        v5 = -1073741811;
      }
      else if ( *(_DWORD *)(a1 + 56) )
      {
        v8 = 60;
        if ( *((_DWORD *)v10 + 1) < 0x3Cu )
          v8 = *((_DWORD *)v10 + 1);
        *(_DWORD *)(a1 + 56) = v8;
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  SddlpFree(v10);
  return (unsigned int)v5;
}
