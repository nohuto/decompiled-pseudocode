/*
 * XREFs of PiPnpRtlObjectEventCreate @ 0x140964B70
 * Callers:
 *     PiPnpRtlEnsureObjectCached @ 0x1407A9DA8 (PiPnpRtlEnsureObjectCached.c)
 *     PiPnpRtlObjectEventWorker @ 0x1409517A4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403C2E00 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlLookupElementGenericTableFullAvl @ 0x1404144B0 (RtlLookupElementGenericTableFullAvl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDmGetObject @ 0x1409637D0 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140968828 (PiPnpRtlObjectEventRelease.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlObjectEventCreate(unsigned __int16 *a1, int a2, __int64 a3, _QWORD *a4)
{
  void *v8; // rdi
  void *v9; // rsi
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rax
  unsigned __int16 v13; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  int v15; // r9d
  unsigned __int16 *v16; // r11
  unsigned __int16 v17; // dx
  int v18; // r10d
  struct _LIST_ENTRY *i; // rbx
  unsigned __int64 v20; // r8
  void **v21; // rax
  int Object; // eax
  _QWORD *Pool2; // rax
  PVOID inserted; // rax
  TABLE_SEARCH_RESULT SearchResult; // [rsp+30h] [rbp-D0h] BYREF
  void *v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+40h] [rbp-C0h] BYREF
  PVOID NodeOrParent; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *Buffer; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v31[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE *v32; // [rsp+68h] [rbp-98h]
  _BYTE v33[16]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 *v34; // [rsp+C0h] [rbp-40h]
  int v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+CCh] [rbp-34h]

  memset_0(v33, 0, 0x70uLL);
  memset_0(v31, 0, 0x50uLL);
  v8 = 0LL;
  v34 = a1;
  NodeOrParent = 0LL;
  Buffer = v31;
  SearchResult = TableEmptyTree;
  v9 = 0LL;
  v27 = 0LL;
  v10 = 0;
  *a4 = 0LL;
  v36 = a2;
  v28 = 0LL;
  if ( !a1 )
    goto LABEL_35;
  v11 = 0x7FFFLL;
  v12 = a1;
  do
  {
    if ( !*v12 )
      break;
    ++v12;
    --v11;
  }
  while ( v11 );
  v10 = -1073741811;
  if ( v11 )
  {
    v10 = 0;
    v13 = -2 - 2 * v11;
  }
  else
  {
LABEL_35:
    v13 = v28;
  }
  if ( v10 < 0 )
    goto LABEL_23;
  if ( a2 == 3 && v13 <= 8u )
  {
    v10 = -1073741772;
LABEL_23:
    *a4 = 0LL;
    goto LABEL_24;
  }
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v18 = v17 >> 1;
  for ( i = CurrentServerSiloGlobals[75].Flink; v18; v15 = (unsigned __int16)v20 + 65599 * v15 )
  {
    v20 = *v16++;
    --v18;
    if ( (unsigned int)v20 >= 0x61 )
    {
      if ( (unsigned int)v20 > 0x7A )
      {
        if ( i && (unsigned __int16)v20 >= 0xC0u )
          LOWORD(v20) = *((_WORD *)&i->Flink
                        + (v20 & 0xF)
                        + *((unsigned __int16 *)&i->Flink
                          + ((unsigned __int8)v20 >> 4)
                          + (unsigned int)*((unsigned __int16 *)&i->Flink + (v20 >> 8))))
                      + v20;
      }
      else
      {
        LOWORD(v20) = v20 - 32;
      }
    }
  }
  v35 = v15;
  v10 = 0;
  v32 = v33;
  v21 = (void **)RtlLookupElementGenericTableFullAvl((PRTL_AVL_TABLE)(a3 + 24), &Buffer, &NodeOrParent, &SearchResult);
  if ( v21 )
  {
    v8 = *v21;
    if ( *v21 )
      goto LABEL_16;
  }
  Object = PiDmGetObject(a2, a1, &v27);
  v10 = Object;
  if ( Object != -1073741772 )
  {
    if ( Object >= 0 )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
      *(_QWORD *)&v28 = Pool2;
      v8 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        Pool2[2] = 0LL;
        Pool2[3] = 0LL;
        Pool2[4] = 0LL;
        Pool2[5] = 0LL;
        v9 = 0LL;
        Pool2[6] = 0LL;
        Pool2[7] = 0LL;
        Pool2[8] = 0LL;
        Pool2[9] = 5LL;
        *(_DWORD *)Pool2 = 1;
        Pool2[1] = v27;
        inserted = RtlInsertElementGenericTableFullAvl(
                     (PRTL_AVL_TABLE)(a3 + 24),
                     &v28,
                     8u,
                     0LL,
                     NodeOrParent,
                     SearchResult);
        v8 = (void *)v28;
        if ( inserted )
        {
LABEL_16:
          *a4 = v8;
          return (unsigned int)v10;
        }
        v10 = -1073741670;
        goto LABEL_21;
      }
      v10 = -1073741670;
    }
    v9 = v27;
LABEL_21:
    if ( v8 )
      PiPnpRtlObjectEventRelease(v8);
    goto LABEL_23;
  }
  v9 = v27;
  v10 = 0;
LABEL_24:
  if ( v9 )
    PiDmObjectRelease(v9);
  return (unsigned int)v10;
}
