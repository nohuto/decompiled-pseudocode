/*
 * XREFs of PiDqQuerySerializeActionQueue @ 0x14094F1CC
 * Callers:
 *     PiDqIrpQueryGetResult @ 0x14094EF04 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14094FA58 (PiDqIrpQueryCreate.c)
 * Callees:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14094F4E4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryLock @ 0x140950830 (PiDqQueryLock.c)
 *     PiDqQueryUnlock @ 0x1409508A4 (PiDqQueryUnlock.c)
 *     PiDqQueryGetObjectManager @ 0x140950D50 (PiDqQueryGetObjectManager.c)
 *     PiDqActionDataCreate @ 0x14095124C (PiDqActionDataCreate.c)
 *     PiDqActionDataFree @ 0x14095169C (PiDqActionDataFree.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140968F58 (PiDqQueryActionQueueEntryFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqQuerySerializeActionQueue(__int64 a1, __int64 a2, int a3, char a4, int *a5, _DWORD *a6)
{
  int v7; // esi
  int v8; // ebx
  struct _ERESOURCE *ObjectManager; // rax
  _QWORD *v10; // rax
  __int64 *v11; // r15
  __int64 v12; // rcx
  int v13; // ebx
  _QWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+4Ch] [rbp-3Ch]
  PVOID P; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+58h] [rbp-30h]
  bool v21; // [rsp+5Ch] [rbp-2Ch]
  char v22; // [rsp+5Dh] [rbp-2Bh]
  __int16 v23; // [rsp+5Eh] [rbp-2Ah]
  PVOID v24; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0;
  v15[0] = 0LL;
  v24 = 0LL;
  v23 = 0;
  v16 = a2;
  v17 = a3;
  v18 = 16;
  P = 0LL;
  v20 = 0;
  v21 = (a4 & 3) == 3;
  v22 = 0;
  PiDqQueryLock(a1);
  v8 = *(_DWORD *)(a1 + 216);
  PiDqQueryUnlock(a1);
  if ( (v8 & 0x20) == 0 )
  {
    ObjectManager = (struct _ERESOURCE *)PiDqQueryGetObjectManager(a1);
    v7 = PiDqObjectManagerEnumerateAndRegisterQuery(ObjectManager);
  }
  if ( v7 < 0 )
  {
LABEL_18:
    *a5 = 0;
    *a6 = 0;
  }
  else
  {
    v7 = MesEncodeIncrementalHandleCreate(&v16, PiDqSerializationAlloc, &PiDqSerializationWrite, v15);
    if ( v7 >= 0 )
    {
      v7 = MesIncrementalHandleReset(v15[0], &v16, 0LL, 0LL, 0LL, *(_DWORD *)(a1 + 216) & 2);
      if ( v7 >= 0 )
      {
        *a5 = v18;
        *a6 = 0;
        PiDqQueryLock(a1);
        v15[1] = a1 + 184;
        v24 = *(PVOID *)(a1 + 184);
        *(_QWORD *)(a1 + 184) = 0LL;
        PiDqQueryUnlock(a1);
        while ( 1 )
        {
          if ( v24 )
          {
            NdrMesTypeEncode3(v15[0], "TP 3\a", &off_1400047E8, &off_140E06EF0, 1, &v24);
            if ( (_BYTE)v23 )
            {
              v7 = -1073741819;
              goto LABEL_18;
            }
            if ( v22 )
            {
              PiDqQueryLock(a1);
              *(_QWORD *)(a1 + 184) = v24;
              v24 = 0LL;
              PiDqQueryUnlock(a1);
              *a6 = v20 + 16;
              break;
            }
            *a5 = v18;
            PiDqActionDataFree(v24);
            v24 = 0LL;
          }
          PiDqQueryLock(a1);
          v10 = (_QWORD *)(a1 + 192);
          v11 = *(__int64 **)(a1 + 192);
          if ( v11 == (__int64 *)(a1 + 192) )
          {
            PiDqQueryUnlock(a1);
            break;
          }
          v12 = *v11;
          if ( (_QWORD *)v11[1] != v10 || *(__int64 **)(v12 + 8) != v11 )
            __fastfail(3u);
          *v10 = v12;
          *(_QWORD *)(v12 + 8) = v10;
          --*(_DWORD *)(a1 + 208);
          PiDqQueryUnlock(a1);
          v13 = PiDqActionDataCreate(*(_QWORD *)(a1 + 24), a1 + 32, v11, &v24);
          PiDqQueryActionQueueEntryFree(v11);
          v7 = 0;
          if ( v13 != -1073741772 )
            v7 = v13;
          if ( v7 < 0 )
            goto LABEL_18;
        }
      }
    }
    if ( v7 < 0 )
      goto LABEL_18;
  }
  if ( v24 )
    PiDqActionDataFree(v24);
  if ( P )
    ExFreePoolWithTag(P, 0x58706E50u);
  if ( v15[0] )
    MesHandleFree();
  return (unsigned int)v7;
}
