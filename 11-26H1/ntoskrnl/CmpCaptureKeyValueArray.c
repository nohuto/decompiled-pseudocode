/*
 * XREFs of CmpCaptureKeyValueArray @ 0x14093FADC
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14093F350 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     CmpCaptureUnicodeStringBuffer @ 0x1408F8C10 (CmpCaptureUnicodeStringBuffer.c)
 *     CmpDoesBufferRequireCapturing @ 0x14093FE00 (CmpDoesBufferRequireCapturing.c)
 *     CmpCaptureUnicodeString @ 0x140940730 (CmpCaptureUnicodeString.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        struct _PRIVILEGE_SET **a5,
        __int64 *a6)
{
  char v6; // r13
  struct _PRIVILEGE_SET *TransientPoolWithQuota; // rsi
  struct _PRIVILEGE_SET *v8; // r14
  unsigned __int64 v9; // r12
  unsigned int v10; // edi
  void *v11; // rdx
  __int64 v12; // r8
  char *v13; // r13
  int v14; // edi
  int v15; // eax
  __int64 v16; // r15
  __int64 v17; // r12
  unsigned int i; // edi
  unsigned __int16 *v19; // r13
  int v21; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v22; // [rsp+24h] [rbp-A4h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  __int128 v24; // [rsp+68h] [rbp-60h] BYREF
  __int64 v25; // [rsp+78h] [rbp-50h]
  __int64 v26; // [rsp+80h] [rbp-48h]

  v6 = a3;
  v24 = 0LL;
  v25 = 0LL;
  TransientPoolWithQuota = 0LL;
  v8 = 0LL;
  if ( !a2 )
    goto LABEL_35;
  TransientPoolWithQuota = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
  if ( !TransientPoolWithQuota )
    goto LABEL_41;
  if ( v6 )
  {
    v8 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuota();
    if ( !v8 )
      goto LABEL_41;
  }
  v9 = 0LL;
  v10 = 0;
  v21 = 0;
  while ( v10 < a2 )
  {
    v23 = 3LL * v10;
    v11 = (void *)(a1 + 24LL * v10);
    if ( v6 )
      RtlCopyFromUser(&v24, v11, 0x18uLL);
    else
      RtlCopyVolatileMemory(&v24, v11, 0x18uLL);
    if ( v6 )
    {
      v13 = (char *)v8 + 16 * v10;
      LOBYTE(v12) = a3;
      v14 = CmpCaptureUnicodeString(v13, v24, v12);
      if ( v14 < 0 )
        goto LABEL_36;
      v10 = v21;
    }
    else
    {
      v13 = (char *)v24;
    }
    *((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + v23) = v13;
    v22 = *(_WORD *)v13;
    if ( *(_WORD *)v13 )
    {
      if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, *((_QWORD *)v13 + 1)) )
      {
        if ( v9 + v22 < v9 )
        {
          v9 = -1LL;
          v15 = -1073741675;
        }
        else
        {
          v9 += v22;
          v15 = 0;
        }
        if ( v15 < 0 )
        {
          v14 = -1073741670;
          goto LABEL_36;
        }
      }
    }
    else
    {
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 0;
    }
    v21 = ++v10;
    v6 = a3;
  }
  if ( !v9 )
  {
    *a4 = TransientPoolWithQuota;
    TransientPoolWithQuota = 0LL;
    *a5 = v8;
    v8 = 0LL;
LABEL_35:
    v14 = 0;
    goto LABEL_36;
  }
  v16 = CmpAllocateTransientPoolWithQuota();
  if ( v16 )
  {
    v17 = 0LL;
    for ( i = 0; i < a2; ++i )
    {
      v19 = (unsigned __int16 *)*((_QWORD *)&TransientPoolWithQuota->PrivilegeCount + 3 * i);
      if ( *v19 && (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, *((_QWORD *)v19 + 1)) )
      {
        CmpCaptureUnicodeStringBuffer(v19, (void *)(v17 + v16), a3);
        v17 += *v19;
        v26 = v17;
      }
    }
    *a4 = TransientPoolWithQuota;
    TransientPoolWithQuota = 0LL;
    *a5 = v8;
    v8 = 0LL;
    *a6 = v16;
    goto LABEL_35;
  }
LABEL_41:
  v14 = -1073741670;
LABEL_36:
  if ( TransientPoolWithQuota )
    CmSiFreeMemory(TransientPoolWithQuota);
  if ( v8 )
    CmSiFreeMemory(v8);
  return (unsigned int)v14;
}
