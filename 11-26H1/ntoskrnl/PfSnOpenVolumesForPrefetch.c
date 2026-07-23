/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x140983B38
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     NtCreateEvent @ 0x1408F5E80 (NtCreateEvent.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x140982214 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x140982310 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1409841A4 (PfSnIsVolumeMounted.c)
 *     PfpOpenHandleClose @ 0x14098B268 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14098BDF0 (PfpOpenHandleCreate.c)
 *     IoGetDeviceInterfaces @ 0x140A30A80 (IoGetDeviceInterfaces.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140AEF17C (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140AF3568 (PfSnVolumeCheckSeekPenalty.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  unsigned int v3; // r13d
  PZZWSTR v5; // r12
  int v6; // ebx
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  NTSTATUS DeviceInterfaces; // edi
  const WCHAR *i; // rdi
  __int64 v11; // r12
  unsigned __int64 v12; // rcx
  int IsVolumeMounted; // eax
  int v14; // ecx
  PVOID **v15; // rax
  PVOID **v16; // rsi
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  PVOID *v19; // rax
  wchar_t *v20; // r12
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  PVOID *v25; // rcx
  __int64 *v26; // rcx
  HANDLE v27; // rdx
  unsigned __int8 v28; // al
  signed __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v32; // rcx
  wchar_t *v33; // rax
  __int64 v34; // r13
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 *v37; // rdx
  __int16 v38; // cx
  PVOID *v39; // r13
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  PZZWSTR SymbolicLinkList; // [rsp+50h] [rbp-89h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-81h] BYREF
  PVOID *v44; // [rsp+60h] [rbp-79h] BYREF
  __int128 v45; // [rsp+68h] [rbp-71h] BYREF
  __m256i v46; // [rsp+78h] [rbp-61h] BYREF
  __m256i v47; // [rsp+98h] [rbp-41h] BYREF
  unsigned __int64 v48; // [rsp+B8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  int v50; // [rsp+140h] [rbp+67h]
  int j; // [rsp+140h] [rbp+67h]
  size_t cbDest; // [rsp+150h] [rbp+77h]
  int v54; // [rsp+158h] [rbp+7Fh] BYREF

  v2 = *a1;
  v3 = 0;
  v44 = 0LL;
  v54 = 0;
  p_P = &P;
  v50 = 0;
  P = &P;
  v47.m256i_i64[3] = 0x200000000LL;
  v5 = 0LL;
  v46.m256i_i64[3] = 0x200000000LL;
  memset(&ObjectAttributes, 0, 44);
  SymbolicLinkList = 0LL;
  v6 = 0;
  memset(&v47, 0, 24);
  v45 = 0LL;
  memset(&v46, 0, 24);
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, 1);
  if ( v2 && *(_DWORD *)(v2 + 112) < 0x4000u )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    a1[2] = Pool2;
    if ( Pool2 )
    {
      if ( *(_DWORD *)(v2 + 112) )
      {
        do
        {
          v8 = (_QWORD *)(a1[2] + 112LL * (unsigned int)v5);
          memset_0(v8, 0, 0x70uLL);
          v8[1] = v8;
          *v8 = v8;
          LODWORD(v5) = (_DWORD)v5 + 1;
          *((_OWORD *)v8 + 2) = 0LL;
          *((_OWORD *)v8 + 3) = 0LL;
          v8[7] |= 0x200000000uLL;
          *((_OWORD *)v8 + 4) = 0LL;
          *((_OWORD *)v8 + 5) = 0LL;
          v8[11] |= 0x200000000uLL;
        }
        while ( (unsigned int)v5 < *(_DWORD *)(v2 + 112) );
        v3 = 0;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DeviceInterfaces = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( DeviceInterfaces >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_VOLUME, 0LL, 0, &SymbolicLinkList);
        if ( DeviceInterfaces >= 0 )
        {
          for ( i = SymbolicLinkList; *i; i = (const WCHAR *)((char *)i + v48) )
          {
            v11 = -1LL;
            do
              ++v11;
            while ( i[v11] );
            v12 = 2LL * (unsigned int)(v11 + 1);
            v48 = v12;
            if ( v3 <= v12 )
              v3 = v12;
            IsVolumeMounted = PfSnIsVolumeMounted(i);
            v14 = v50;
            if ( IsVolumeMounted < 0 )
              v14 = 0;
            v50 = v14;
            if ( v14 && (int)PfSnQueryVolumeInfo(a1[1], i, &v47, &v44, &v54) >= 0 )
            {
              v15 = (PVOID **)ExAllocatePool2(0x100uLL);
              v16 = v15;
              if ( !v15 )
              {
                DeviceInterfaces = -1073741670;
                goto LABEL_34;
              }
              memset_0(v15, 0, 0x48uLL);
              v17 = *(_OWORD *)v47.m256i_i8;
              v18 = *(_OWORD *)&v47.m256i_u64[2];
              v16[8] = v44;
              *((_DWORD *)v16 + 15) = v54;
              *((_OWORD *)v16 + 1) = v17;
              v47.m256i_i64[0] = 0LL;
              v16[6] = (PVOID *)i;
              *((_OWORD *)v16 + 2) = v18;
              *((_DWORD *)v16 + 14) = v11;
              v47.m256i_i64[3] = 0x200000000LL;
              v19 = p_P;
              *(_OWORD *)&v47.m256i_u64[1] = 0LL;
              if ( *p_P != &P )
LABEL_27:
                __fastfail(3u);
              v16[1] = p_P;
              *v16 = &P;
              *v19 = v16;
              p_P = (PVOID *)v16;
            }
          }
          cbDest = v3 + 2;
          v20 = (wchar_t *)ExAllocatePool2(0x100uLL);
          if ( v20 )
          {
            v21 = v2 + *(unsigned int *)(v2 + 108);
            v22 = 0LL;
            for ( j = 0; (unsigned int)v22 < *(_DWORD *)(v2 + 112); j = v22 )
            {
              v23 = a1[2] + 112 * v22;
              v24 = 96 * v22;
              *(_QWORD *)(v23 + 16) = v21 + *(unsigned int *)(96 * v22 + v21);
              *(_DWORD *)(v23 + 24) = *(_DWORD *)(96 * v22 + v21 + 4);
              *(_DWORD *)(v23 + 104) = 0;
              *(_QWORD *)(v23 + 96) = v21 + *(unsigned int *)(96 * v22 + v21 + 28);
              v25 = (PVOID *)P;
              if ( P == &P )
                goto LABEL_26;
              do
              {
                v39 = v25;
                if ( *(PVOID *)(v24 + v21 + 8) == v25[8] && *(_DWORD *)(v24 + v21 + 16) == *((_DWORD *)v25 + 15) )
                  break;
                v25 = (PVOID *)*v25;
              }
              while ( v25 != &P );
              if ( v25 == &P )
                goto LABEL_26;
              RtlStringCbPrintfW(v20, cbDest, L"%s\\", v39[6]);
              v45 = 0LL;
              v32 = 0x7FFFLL;
              v33 = v20;
              while ( *v33 )
              {
                ++v33;
                if ( !--v32 )
                  goto LABEL_54;
              }
              v38 = 2 * v32;
              *((_QWORD *)&v45 + 1) = v20;
              LOWORD(v45) = -2 - v38;
              WORD1(v45) = -v38;
LABEL_54:
              v34 = (__int64)(v39 + 2);
              if ( (int)PfpOpenHandleCreate((unsigned int)&v46, a1[1], (unsigned int)&v45, 0, 1179785, 33, 128, v34) < 0 )
              {
LABEL_26:
                memset(&v46, 0, 24);
                v46.m256i_i64[3] = 0x200000000LL;
                v26 = (__int64 *)a1[4];
                if ( (__int64 *)*v26 != a1 + 3 )
                  goto LABEL_27;
                *(_QWORD *)v23 = a1 + 3;
                *(_QWORD *)(v23 + 8) = v26;
                *v26 = v23;
                a1[4] = v23;
              }
              else
              {
                *(_OWORD *)(v23 + 32) = *(_OWORD *)v34;
                *(_OWORD *)(v23 + 48) = *(_OWORD *)(v34 + 16);
                v35 = *(_OWORD *)&v46.m256i_u64[2];
                v46.m256i_i64[3] = 0x200000000LL;
                *(_OWORD *)v34 = 0LL;
                *(_OWORD *)(v34 + 16) = 0LL;
                *(_QWORD *)(v34 + 24) |= 0x200000000uLL;
                v36 = *(_OWORD *)v46.m256i_i8;
                v46.m256i_i64[0] = 0LL;
                *(_OWORD *)(v23 + 64) = v36;
                *(_OWORD *)(v23 + 80) = v35;
                v37 = (__int64 *)a1[6];
                *(_OWORD *)&v46.m256i_u64[1] = 0LL;
                if ( (__int64 *)*v37 != a1 + 5 )
                  goto LABEL_27;
                *(_QWORD *)v23 = a1 + 5;
                *(_QWORD *)(v23 + 8) = v37;
                *v37 = v23;
                v27 = EventHandle;
                a1[6] = v23;
                v28 = PfSnVolumeCheckSeekPenalty(v23 + 32, v27);
                *(_DWORD *)(v23 + 108) ^= (v28 ^ (unsigned __int8)*(_DWORD *)(v23 + 108)) & 1;
                if ( (v28 & 1) != 0 )
                {
                  v6 |= 1u;
                }
                else if ( (v6 & 2) == 0 && (v6 & 1) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v23 + 32, EventHandle) )
                {
                  v6 |= 2u;
                }
              }
              v22 = (unsigned int)(j + 1);
            }
            DeviceInterfaces = 0;
            *a2 = v6;
            ExFreePoolWithTag(v20, 0);
          }
          else
          {
            DeviceInterfaces = -1073741670;
          }
        }
      }
LABEL_34:
      v5 = SymbolicLinkList;
    }
    else
    {
      DeviceInterfaces = -1073741670;
    }
  }
  else
  {
    DeviceInterfaces = -1073741811;
  }
  if ( (v47.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v47, a1[1]);
  while ( 1 )
  {
    v29 = (signed __int64 *)P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_27;
    v30 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_27;
    P = *(PVOID *)P;
    *(_QWORD *)(v30 + 8) = &P;
    if ( _bittest64(v29 + 5, 0x22u) )
      PfpOpenHandleClose(v29 + 2, a1[1]);
    ExFreePoolWithTag(v29, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v2, 0);
  return (unsigned int)DeviceInterfaces;
}
