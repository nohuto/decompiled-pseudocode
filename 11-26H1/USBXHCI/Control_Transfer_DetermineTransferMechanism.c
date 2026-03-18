/*
 * XREFs of Control_Transfer_DetermineTransferMechanism @ 0x140003FE0
 * Callers:
 *     <none>
 * Callees:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1400043A4 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_QueueWorkItem @ 0x1400045B4 (CommonBuffer_QueueWorkItem.c)
 */

void __fastcall Control_Transfer_DetermineTransferMechanism(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  char *v12; // r14
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 360);
  v3 = *(_DWORD *)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 48);
  if ( v3 )
  {
    if ( !*(_BYTE *)(a1 + 328) || v3 > 8 || (*(_DWORD *)(v4 + 32) & 1) != 0 )
    {
      if ( *(_WORD *)(v4 + 2) != 56 )
      {
        switch ( *(_WORD *)(v4 + 2) )
        {
          case '9':
          case ':':
            goto LABEL_8;
          default:
            break;
        }
      }
      v5 = *(_QWORD **)(v4 + 48);
      if ( !v5 || !*v5 )
      {
LABEL_8:
        if ( v3 <= *(_DWORD *)(a1 + 24) )
        {
          *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
          v6 = (_QWORD *)(a1 + 224);
          v7 = *(_QWORD **)(a1 + 224);
          if ( v7 == (_QWORD *)(a1 + 224) )
          {
            v10 = *(_QWORD *)(a1 + 40);
            v11 = *(unsigned int *)(a1 + 24);
            v13 = 0;
            v12 = *(char **)(v10 + 120);
            v7 = (_QWORD *)XilCoreCommonBuffer_AcquireBuffer(v12 + 88, v11, a1, 845639250LL, &v13);
            if ( v13 == 1 )
              CommonBuffer_QueueWorkItem(v12);
          }
          else
          {
            if ( (_QWORD *)v7[1] != v6 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
              __fastfail(3u);
            *v6 = v8;
            *(_QWORD *)(v8 + 8) = v6;
            v7[1] = v7;
            *v7 = v7;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
          *(_QWORD *)(v1 + 88) = v7;
          if ( v7 )
          {
            v9 = 2;
LABEL_15:
            *(_DWORD *)(v1 + 64) = v9;
            return;
          }
        }
      }
      v9 = 3;
      goto LABEL_15;
    }
    *(_DWORD *)(v1 + 64) = 1;
  }
  else
  {
    *(_DWORD *)(v1 + 64) = 0;
  }
}
