/*
 * XREFs of _GetMenuDefaultItem @ 0x1402F2F38
 * Callers:
 *     xxxMNDoubleClick @ 0x1402BFA0C (xxxMNDoubleClick.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140047684 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140048F0C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rcx
  int i; // ebx
  __int64 v8[5]; // [rsp+20h] [rbp-28h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v8, a2);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 88);
  for ( i = 0; i < *(_DWORD *)(v4 + 44); ++i )
  {
    v3 = *(unsigned int *)(*(_QWORD *)v5 + 4LL);
    if ( (v3 & 0x1000) != 0 && (v3 & 3) == 0 )
      goto LABEL_7;
    v5 += 96LL;
  }
  i = -1;
LABEL_7:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v8, v3);
  return (unsigned int)i;
}
