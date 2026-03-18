/*
 * XREFs of VidSchCheckSurfaceIndependentFlipAssignment @ 0x140037190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall VidSchCheckSurfaceIndependentFlipAssignment(
        __int64 a1,
        _DWORD *a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12,
        _OWORD *a13,
        _OWORD *a14)
{
  int v14; // ebx
  _DWORD *result; // rax
  int v23; // r9d
  __int64 v24; // rcx
  __int64 i; // r10
  char v26; // si
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int8 v34; // al
  __int64 v35; // rcx
  __int128 v36; // xmm0
  __int64 v37; // rax
  int v38; // ecx
  __int128 v39; // xmm1
  struct _LUID DestinationLuid; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+28h] [rbp-A0h]
  __int64 v42; // [rsp+30h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-90h] BYREF
  __int128 v44; // [rsp+50h] [rbp-78h]
  __int128 v45; // [rsp+60h] [rbp-68h]
  __int128 v46; // [rsp+70h] [rbp-58h]
  __int128 v47; // [rsp+80h] [rbp-48h]
  int v48; // [rsp+D0h] [rbp+8h]
  char v50; // [rsp+F8h] [rbp+30h]
  unsigned __int8 v51; // [rsp+100h] [rbp+38h]
  char v52; // [rsp+108h] [rbp+40h]
  char v53; // [rsp+110h] [rbp+48h]
  int v54; // [rsp+128h] [rbp+60h]

  v14 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0LL;
  *a10 = 0;
  result = a11;
  *a11 = 0;
  *a12 = 0;
  if ( *(_BYTE *)(a1 + 55) )
  {
    DestinationLuid = 0LL;
    RtlCopyLuid(&DestinationLuid, a3);
    v48 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v53 = 0;
    v52 = *(_BYTE *)(a1 + 164);
    v50 = 0;
    v51 = 0;
    v44 = 0LL;
    v54 = 0;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
    v23 = 0;
    v24 = 0LL;
    for ( i = 0LL; ; i += 160LL )
    {
      if ( v24 > *(int *)(a1 + 3760) )
      {
        v26 = 0;
        goto LABEL_5;
      }
      v27 = *(_QWORD *)(a1 + 3576);
      if ( *(_DWORD *)(i + v27) == DestinationLuid.LowPart && *(_DWORD *)(i + v27 + 4) == DestinationLuid.HighPart )
        break;
      ++v23;
      ++v24;
    }
    v28 = 0LL;
    v29 = v27 + 160LL * v23;
    v54 = 0;
    v30 = *(_DWORD *)(v29 + 16);
    if ( (v30 & 1) == 0 )
    {
      do
      {
        v30 >>= 1;
        v28 = (unsigned int)(v28 + 1);
      }
      while ( (v30 & 1) == 0 );
      v54 = v28;
    }
    v31 = *(_QWORD *)(a1 + 8 * v28 + 3448);
    v32 = *(unsigned int *)(v29 + 20);
    v48 = *(_DWORD *)(v29 + 20);
    v53 = *(_BYTE *)(v31 + 3200);
    v33 = *(_DWORD *)(v29 + 112);
    v46 = *(_OWORD *)(v31 + 3204);
    v47 = *(_OWORD *)(v31 + 3220);
    if ( v33 != 2 && v33 != 1 )
    {
      if ( v33 == 3 && a4 != -1 && a4 == *(_QWORD *)(v29 + 8) )
        *a11 = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      goto LABEL_7;
    }
    if ( a4 == *(_QWORD *)(v29 + 8) || a4 == -1 )
    {
      if ( *(_BYTE *)(v29 + 96) )
      {
        v34 = *(_BYTE *)(v29 + 108);
        v41 = *(_QWORD *)(v29 + 88);
        v50 = 1;
        v51 = v34;
        if ( v34 || v52 )
        {
          v35 = 304 * v32;
          v36 = *(_OWORD *)(v35 + v31 + 152);
          LODWORD(v42) = *(_DWORD *)(v35 + v31 + 184);
          v44 = v36;
          v45 = *(_OWORD *)(v35 + v31 + 168);
        }
        v26 = 1;
      }
      else
      {
        v50 = 0;
        v26 = 1;
      }
    }
    else
    {
      v26 = 1;
      *a10 = 1;
      *a8 = v32;
    }
LABEL_5:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v50 )
    {
      *a6 = 1;
      *a8 = v48;
      v37 = v41;
      *a7 = v51;
      *a9 = v37;
      if ( v51 || v52 )
      {
        v38 = v42;
        v39 = v45;
        *(_OWORD *)a5 = v44;
        *(_OWORD *)(a5 + 16) = v39;
        *(_DWORD *)(a5 + 32) = v38;
      }
    }
    if ( v26 )
LABEL_7:
      *a2 = v54;
    LOBYTE(v14) = v53 != 0;
    *a12 = v14;
    if ( a13 )
      *a13 = v46;
    result = a14;
    if ( a14 )
      *a14 = v47;
  }
  return result;
}
