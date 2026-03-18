/*
 * XREFs of RIMFindInputDeviceForConfig @ 0x14012A394
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1401EFCCC (RIMDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     RIMIsParentCommon @ 0x14012AAD0 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindInputDeviceForConfig(int a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  int v11; // ecx
  __int64 v12; // rdx

  v6 = 0;
  *a4 = 0;
  v8 = *(_QWORD *)(a2 + 424);
  *a5 = 0;
  while ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 168) & 0x400) == 0 && (*(_DWORD *)(v8 + 184) & 0x80u) != 0 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(v8 + 456) + 24LL);
      if ( (unsigned int)(v11 - 1) <= 3 || v11 == 7 )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a3,
                             v8,
                             a1,
                             *(unsigned __int16 *)(*(_QWORD *)(v8 + 440) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v8 + 440) + 112LL)) )
        {
          v12 = *(_QWORD *)(v8 + 456);
          v6 = 1;
          *a4 = -__CFSHR__(*(_DWORD *)(v12 + 368), 13);
          if ( a6 )
            *a6 = v8;
          if ( (*(_DWORD *)(v8 + 184) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
            *a5 = 1;
          return v6;
        }
      }
    }
    v8 = *(_QWORD *)(v8 + 40);
  }
  return v6;
}
