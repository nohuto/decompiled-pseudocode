/*
 * XREFs of DxgkNetDispGetNextChunkInfo @ 0x1401B7180
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x140089444 (DxgkMiracastGetNextChunkInfo.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     RtlReadULong64FromUser @ 0x140196750 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x140196858 (RtlWriteULongToUser.c)
 */

__int64 __fastcall DxgkNetDispGetNextChunkInfo(
        volatile void *a1,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        unsigned int *a5,
        void *a6,
        __int64 a7)
{
  struct D3DKMT_MIRACAST_CHUNK_DATA *v10; // rdi
  __int64 v11; // rdx
  int NextChunkInfo; // ebx
  unsigned int ULongFromUser; // eax
  unsigned __int64 v14; // rsi
  __int64 i; // r14
  void *v16; // rcx
  NTSTATUS v17; // eax
  void *v18; // r13
  _DWORD *v19; // r14
  __int64 v20; // rsi
  unsigned int j; // edx
  PVOID v22; // rcx
  unsigned int v24; // [rsp+30h] [rbp-1C8h] BYREF
  unsigned int v25[2]; // [rsp+34h] [rbp-1C4h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-1BCh]
  NTSTATUS v27; // [rsp+40h] [rbp-1B8h]
  __int64 ULong64FromUser; // [rsp+48h] [rbp-1B0h]
  struct D3DKMT_MIRACAST_CHUNK_DATA *v29; // [rsp+50h] [rbp-1A8h]
  PVOID Object; // [rsp+58h] [rbp-1A0h] BYREF
  void *v31; // [rsp+60h] [rbp-198h]
  _DWORD *v32; // [rsp+68h] [rbp-190h]
  __int64 v33[4]; // [rsp+70h] [rbp-188h] BYREF
  PVOID v34[36]; // [rsp+90h] [rbp-168h] BYREF

  v26 = a2;
  v33[1] = (__int64)a5;
  v31 = a6;
  v33[2] = (__int64)a6;
  v32 = (_DWORD *)a7;
  v33[3] = a7;
  v24 = 0;
  v25[0] = 0;
  v10 = 0LL;
  v29 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( a3 <= 4 )
  {
    LODWORD(v34[35]) = a3;
    ULong64FromUser = RtlReadULong64FromUser(a1);
    v33[0] = ULong64FromUser;
    ULongFromUser = RtlReadULongFromUser(a5);
    v14 = ULongFromUser;
    v24 = ULongFromUser;
    ProbeForRead(a4, LODWORD(v34[35]), 8u);
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      v25[1] = i;
      if ( (unsigned int)i >= LODWORD(v34[35]) )
        break;
      v16 = (void *)*((_QWORD *)a4 + i);
      Object = 0LL;
      v17 = ObReferenceObjectByHandle(v16, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v34[i + 1] = Object;
      NextChunkInfo = v17;
      v27 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry2(3LL, *((_QWORD *)a4 + i), v17);
        WdLogGlobalForLineNumber = 9101;
        v18 = v31;
        v19 = v32;
        goto LABEL_11;
      }
    }
    v10 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)operator new[](v14, 0x4B677844u, 64LL);
    v29 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 9117;
      NextChunkInfo = -1073741801;
      goto LABEL_15;
    }
    NextChunkInfo = DxgkMiracastGetNextChunkInfo(v33, v26, (__int64)v34, &v24, v10, v25);
    LODWORD(v14) = v24;
    v18 = v31;
    v19 = v32;
LABEL_11:
    if ( NextChunkInfo >= 0 )
    {
      if ( (_DWORD)v14 )
        RtlCopyToUser(v18, v10, (unsigned int)v14);
      RtlWriteULongToUser(v19, v25[0]);
      RtlWriteULongToUser(a5, v14);
    }
  }
  else
  {
    v11 = a3;
    NextChunkInfo = -1073741811;
    WdLogSingleEntry3(3LL, v11, 4LL, -1073741811LL);
    WdLogGlobalForLineNumber = 9076;
  }
LABEL_15:
  v20 = 0LL;
  for ( j = (unsigned int)v34[35]; (unsigned int)v20 < j; v20 = (unsigned int)(v20 + 1) )
  {
    v22 = v34[v20 + 1];
    if ( v22 )
    {
      ObfDereferenceObject(v22);
      j = (unsigned int)v34[35];
    }
  }
  if ( v10 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
  return (unsigned int)NextChunkInfo;
}
