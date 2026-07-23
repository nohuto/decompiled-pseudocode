/*
 * XREFs of IopTrackLink @ 0x140AD048C
 * Callers:
 *     NtSetInformationFile @ 0x140269860 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     IoGetTransactionParameterBlock @ 0x1404406C0 (IoGetTransactionParameterBlock.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopMarshalIds @ 0x140797D18 (IopMarshalIds.c)
 *     IopSetRemoteLink @ 0x14079868C (IopSetRemoteLink.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     IopTrackLink @ 0x140AD048C (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x140AD0E98 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x140AD0FDC (IopGetVolumeId.c)
 *     IopSendMessageToTrackService @ 0x140B51334 (IopSendMessageToTrackService.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopTrackLink(
        PFILE_OBJECT FileObject,
        void *a2,
        void *a3,
        unsigned int a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  size_t v6; // r13
  struct _FILE_OBJECT *v9; // rsi
  unsigned int *v10; // rdi
  void *v11; // rcx
  __int64 v12; // rdx
  char v13; // r13
  int SetObjectId; // eax
  NTSTATUS v15; // ebx
  struct _KEVENT *v16; // r13
  int v17; // eax
  NTSTATUS v18; // eax
  int v19; // eax
  NTSTATUS v20; // eax
  int VolumeId; // eax
  int v22; // eax
  __int64 v23; // rdx
  unsigned int *Pool2; // rax
  PVOID Object[3]; // [rsp+48h] [rbp-2C0h] BYREF
  PVOID v27; // [rsp+60h] [rbp-2A8h]
  __int128 Buf2; // [rsp+68h] [rbp-2A0h] BYREF
  int v29; // [rsp+78h] [rbp-290h]
  __int64 v30; // [rsp+80h] [rbp-288h]
  __int128 v31; // [rsp+90h] [rbp-278h] BYREF
  __m128i v32; // [rsp+A0h] [rbp-268h]
  __int128 v33; // [rsp+B0h] [rbp-258h]
  __int128 v34; // [rsp+C0h] [rbp-248h]
  __int128 v35; // [rsp+D0h] [rbp-238h] BYREF
  __m128i v36; // [rsp+E0h] [rbp-228h]
  __int128 Source; // [rsp+F0h] [rbp-218h] BYREF
  __int128 v38; // [rsp+100h] [rbp-208h]
  __int128 Buf1; // [rsp+110h] [rbp-1F8h] BYREF
  int v40; // [rsp+120h] [rbp-1E8h]
  __int128 v41; // [rsp+130h] [rbp-1D8h] BYREF
  __m128i v42; // [rsp+140h] [rbp-1C8h]
  __int128 v43; // [rsp+150h] [rbp-1B8h]
  __int128 v44; // [rsp+160h] [rbp-1A8h]
  _OWORD v45[4]; // [rsp+170h] [rbp-198h] BYREF
  _BYTE P[8]; // [rsp+1B0h] [rbp-158h] BYREF

  v6 = a4;
  Object[2] = a2;
  v30 = (__int64)a5;
  v9 = 0LL;
  Object[0] = 0LL;
  Buf2 = 0LL;
  v29 = 0;
  memset_0(&v35, 0, 0x40uLL);
  memset_0(&v41, 0, 0x40uLL);
  Buf1 = 0LL;
  v40 = 0;
  memset_0(v45, 0, sizeof(v45));
  memset_0(P, 0, 0x110uLL);
  if ( AccessMode )
  {
    Pool2 = (unsigned int *)ExAllocatePool2(0x103uLL);
    v10 = Pool2;
    v27 = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    RtlCopyFromUser(Pool2, a3, v6);
  }
  else
  {
    v10 = (unsigned int *)a3;
    v27 = a3;
  }
  v11 = *(void **)v10;
  if ( !*(_QWORD *)v10 && AccessMode == 1 )
  {
LABEL_88:
    ExFreePoolWithTag(v10, 0);
    return 3221225485LL;
  }
  if ( (unsigned int)v6 < 0xC )
  {
    if ( AccessMode )
      ExFreePoolWithTag(v10, 0);
    return 3221225621LL;
  }
  else
  {
    v12 = v10[2];
    if ( (int)v6 - 12 < (unsigned int)v12 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_88;
    }
    if ( (unsigned __int64)(v12 + 36) <= 0x100 )
    {
      v13 = 0;
      if ( v11 )
      {
        Object[0] = 0LL;
        v15 = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, Object, 0LL);
        v9 = (struct _FILE_OBJECT *)Object[0];
        if ( v15 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(v10, 0);
          return (unsigned int)v15;
        }
      }
      if ( (FileObject->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(FileObject);
        v15 = SetObjectId;
        if ( SetObjectId != -1073741772 )
        {
          if ( SetObjectId < 0 )
            goto LABEL_11;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
          {
            if ( !IoGetTransactionParameterBlock(FileObject) )
            {
              if ( !*(_QWORD *)v10 )
              {
LABEL_71:
                if ( IoGetTransactionParameterBlock(FileObject) || *(_QWORD *)v10 && IoGetTransactionParameterBlock(v9) )
                  goto LABEL_74;
                v20 = IopSetRemoteLink(FileObject, v23, v10);
                goto LABEL_60;
              }
              if ( !IoGetTransactionParameterBlock(v9) )
              {
                if ( *(_QWORD *)v10 )
                {
                  if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
                  {
                    v15 = IopGetSetObjectId(v9);
                    if ( v15 < 0 )
                      goto LABEL_11;
                    v15 = IopGetSetObjectId(v9);
                    if ( v15 < 0 )
                      goto LABEL_11;
                    IopMarshalIds((__int64)P, (__int64)&Buf1, v45, (__int64)v10);
                    v16 = a5;
                    v22 = IopTrackLink(FileObject, (__int64)a5, 0);
LABEL_56:
                    v15 = v22;
                    if ( v22 >= 0 )
                    {
                      v41 = v35;
                      v42 = v36;
                      v43 = Source;
                      v44 = v38;
                      v42.m128i_i8[0] = _mm_cvtsi128_si32(v36) | 1;
                      v15 = IopGetSetObjectId(v9);
                      if ( v15 < 0 )
                        IopGetSetObjectId(FileObject);
                    }
                    goto LABEL_75;
                  }
                  VolumeId = IopGetVolumeId(v9);
LABEL_52:
                  v15 = VolumeId;
                  if ( VolumeId < 0 )
                    goto LABEL_11;
                  v15 = IopGetSetObjectId(v9);
                  if ( v15 < 0 )
                    goto LABEL_11;
                  IopMarshalIds((__int64)P, (__int64)&Buf1, v45, (__int64)v10);
                  v16 = a5;
                  v15 = IopTrackLink(FileObject, (__int64)a5, 0);
                  if ( v15 < 0 )
                    goto LABEL_75;
                  v22 = IopGetSetObjectId(FileObject);
                  goto LABEL_56;
                }
                goto LABEL_71;
              }
            }
LABEL_74:
            v15 = -1072103335;
            goto LABEL_11;
          }
        }
      }
      else if ( *(_QWORD *)v10 )
      {
        if ( (v9->DeviceObject->Characteristics & 0x10) == 0 )
        {
          v17 = IopGetSetObjectId(FileObject);
          v15 = v17;
          if ( v17 != -1073741772 )
          {
            if ( v17 < 0 )
              goto LABEL_11;
            if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
            {
              if ( !IoGetTransactionParameterBlock(FileObject)
                && (!*(_QWORD *)v10 || !IoGetTransactionParameterBlock(v9)) )
              {
                v15 = IopGetVolumeId(v9);
                if ( v15 >= 0 )
                {
                  v15 = IopGetVolumeId(FileObject);
                  if ( v15 >= 0 )
                  {
                    v15 = IopGetSetObjectId(FileObject);
                    if ( v15 >= 0 )
                    {
                      v45[0] = v35;
                      v45[1] = v36;
                      v45[2] = Source;
                      v45[3] = v38;
                      v41 = v35;
                      v42 = v36;
                      v43 = Source;
                      v44 = v38;
                      if ( memcmp((char *)&Buf1 + 4, (char *)&Buf2 + 4, 0x10uLL) )
                        v42.m128i_i8[0] = v36.m128i_i8[0] | 1;
                      v18 = IopGetSetObjectId(v9);
                      v15 = v18;
                      if ( v18 == -1073741635 || v18 == -1073741771 )
                      {
                        v15 = IopGetSetObjectId(v9);
                        if ( v15 >= 0 )
                          v15 = IopGetSetObjectId(v9);
                      }
                      if ( v15 < 0 )
                        goto LABEL_33;
                      v13 = 1;
                      if ( memcmp((char *)&Buf1 + 4, (char *)&Buf2 + 4, 0x10uLL) )
                      {
                        IopMarshalIds((__int64)P, (__int64)&Buf1, v45, (__int64)v10);
                        v31 = v35;
                        v32 = v36;
                        v33 = Source;
                        v34 = v38;
                        v32.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
                        v15 = IopSendMessageToTrackService(&Buf2, &v31, P);
                      }
                      if ( v15 < 0 )
                      {
LABEL_33:
                        v19 = 0;
                        if ( v13 )
                        {
                          memcmp(v45, &v35, 0x10uLL);
                          v19 = IopGetSetObjectId(v9);
                        }
                        if ( v19 >= 0 )
                          IopGetSetObjectId(FileObject);
                      }
                    }
                  }
                }
                goto LABEL_11;
              }
              goto LABEL_74;
            }
          }
          v15 = 0;
          goto LABEL_11;
        }
        if ( (int)IopGetSetObjectId(FileObject) >= 0 && RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
        {
          if ( !IoGetTransactionParameterBlock(FileObject) && (!*(_QWORD *)v10 || !IoGetTransactionParameterBlock(v9)) )
          {
            VolumeId = IopGetSetObjectId(v9);
            goto LABEL_52;
          }
          goto LABEL_74;
        }
      }
      else
      {
        v15 = IopGetVolumeId(FileObject);
        if ( v15 < 0 )
          goto LABEL_11;
        v15 = IopGetSetObjectId(FileObject);
        if ( v15 < 0 )
          goto LABEL_11;
        if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
        {
          if ( IoGetTransactionParameterBlock(FileObject) || *(_QWORD *)v10 && IoGetTransactionParameterBlock(v9) )
            goto LABEL_74;
          v31 = v35;
          v32 = v36;
          v33 = Source;
          v34 = v38;
          v32.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
          v20 = IopSendMessageToTrackService(&Buf2, &v31, v10);
LABEL_60:
          v15 = v20;
          goto LABEL_11;
        }
      }
      v15 = 0;
LABEL_11:
      v16 = a5;
LABEL_75:
      if ( AccessMode )
        ExFreePoolWithTag(v10, 0);
      if ( v9 )
        ObfDereferenceObject(v9);
      KeSetEvent(v16, 0, 0);
      return (unsigned int)v15;
    }
    if ( AccessMode )
      ExFreePoolWithTag(v10, 0);
    return 2147483653LL;
  }
}
