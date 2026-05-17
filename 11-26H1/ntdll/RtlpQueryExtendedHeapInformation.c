/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x180092520
 * Callers:
 *     RtlQueryHeapInformation @ 0x180091560 (RtlQueryHeapInformation.c)
 *     RtlpQueryMemoryUsageInformation @ 0x18011E7F4 (RtlpQueryMemoryUsageInformation.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180015DE0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180015FD0 (RtlLockHeap.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180072680 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpIsProtectedHeap @ 0x18009178C (RtlpIsProtectedHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180091D10 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180113660 (RtlpHeapPerformCrossProcessQuery.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18015F440 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18015F880 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int ExtendedInformationHeap; // edi
  int v9; // ecx
  unsigned int v10; // esi
  int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  __int64 (__fastcall *v15)(); // r13
  unsigned __int64 v16; // r15
  unsigned int j; // eax
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  int IsProtectedHeap; // esi
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 i; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+78h] [rbp-88h]
  _QWORD *v29; // [rsp+80h] [rbp-80h]
  _QWORD *v30; // [rsp+88h] [rbp-78h]
  _QWORD v31[9]; // [rsp+90h] [rbp-70h] BYREF
  char *v32; // [rsp+D8h] [rbp-28h]
  __int64 *v33; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-18h]
  _QWORD v35[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  unsigned int v38; // [rsp+118h] [rbp+18h]
  unsigned int v39; // [rsp+190h] [rbp+90h]
  HANDLE Handle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v31, 0, 0x60uLL);
  v27[1] = 0;
  v26 = 0LL;
  v25 = 0LL;
  memset_thunk_772440563353939046(v35, 0, 0x60uLL);
  if ( *a1 == -1 )
  {
    v27[0] = *((_DWORD *)a1 + 4);
    if ( a1[3] )
    {
      v28 = (__int64 (__fastcall *)())a1[3];
      v6 = (_QWORD *)a1[4];
    }
    else
    {
      v31[0] = a1;
      v33 = a1 + 5;
      v34 = (unsigned __int64)a1 + a2;
      v6 = v31;
      v32 = (char *)a1;
      v28 = RtlpExtendedHeapInformationGenerator;
    }
    v29 = v6;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    v7 = a1[1];
    if ( v7 )
    {
      IsProtectedHeap = RtlpIsProtectedHeap(v7);
      if ( !IsProtectedHeap )
        RtlLockHeap(a1[1]);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(a1[1], (__int64)v27);
      if ( !IsProtectedHeap )
        RtlUnlockHeap(a1[1]);
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps((__int64)v27);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
    v9 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v9 = ExtendedInformationHeap;
    v10 = v9;
    if ( v28 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v9 >= 0 )
      {
        v22 = (unsigned __int64)v33;
        if ( a3 )
          *a3 = (char *)v33 - v32;
        if ( v22 > v34 )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v10;
  }
  else
  {
    v23 = 0LL;
    for ( i = 0x10000LL; ; i = (v37 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
    {
      Handle = 0LL;
      v12 = NtCreateSection(&Handle, 983071LL, 0LL, &i, 4, 0x8000000, 0LL);
      if ( v12 < 0 )
        break;
      memset_thunk_772440563353939046(v35, 0, 0x60uLL);
      v13 = *a1;
      v35[2] = a1[1];
      v36 = *((_DWORD *)a1 + 4);
      v35[1] = i;
      v35[0] = Handle;
      v14 = RtlpHeapPerformCrossProcessQuery(v13, v35);
      v12 = v14;
      if ( v14 != -1073741789 )
      {
        if ( v14 >= 0 )
        {
          v25 = 0x10000LL;
          v12 = ZwMapViewOfSection(Handle, -1LL, &v23, 0LL, 0x10000LL, &v26, &v25, 2, 0, 4);
          if ( v12 >= 0 )
          {
            v15 = (__int64 (__fastcall *)())a1[3];
            v16 = 0LL;
            if ( v15 )
            {
              v30 = (_QWORD *)a1[4];
            }
            else
            {
              v31[0] = a1;
              v33 = a1 + 5;
              v15 = RtlpExtendedHeapInformationGenerator;
              v32 = (char *)a1;
              v34 = (unsigned __int64)a1 + a2;
              v30 = v31;
            }
            for ( j = 0; ; j = v39 + 1 )
            {
              v39 = j;
              if ( j >= v38 )
                break;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v18 >= i || v18 >= 2 * v25 || (__int64)(v25 + v26) > (__int64)i )
              {
                v12 = -1073741762;
                break;
              }
              v19 = v18 + v23;
              if ( v18 + 16 >= v25 || !*(_DWORD *)v19 )
              {
                NtUnmapViewOfSection(-1LL, v23);
                v26 += v25;
                v23 = 0LL;
                v12 = ZwMapViewOfSection(Handle, -1LL, &v23, 0LL, v25, &v26, &v25, 2, 0, 4);
                if ( v12 < 0 )
                  break;
                v19 = v23;
                v18 = 0LL;
              }
              v12 = ((__int64 (__fastcall *)(__int64, _QWORD *))v15)(v19, v30);
              if ( v12 < 0 )
                break;
              v16 = *(_QWORD *)(v19 + 8) + v18;
            }
            if ( v15 == RtlpExtendedHeapInformationGenerator )
            {
              if ( v12 >= 0 )
              {
                v20 = (unsigned __int64)v33;
                if ( a3 )
                  *a3 = (char *)v33 - v32;
                if ( v20 > v34 )
                  v12 = -1073741789;
              }
            }
            else if ( a3 )
            {
              *a3 = 88LL;
            }
          }
        }
        break;
      }
      NtClose(Handle);
    }
    if ( v23 )
      NtUnmapViewOfSection(-1LL, v23);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v12;
  }
}
