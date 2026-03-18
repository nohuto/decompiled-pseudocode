/*
 * XREFs of WmipDereferenceEvent @ 0x1409B196C
 * Callers:
 *     WmipProcessEvent @ 0x1409B3480 (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     WmipAlign @ 0x14046B0EC (WmipAlign.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     WmipUnreferenceEntry @ 0x1409B5E78 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1409B6D18 (WmipReferenceEntry.c)
 *     WmipDeliverWnodeToDS @ 0x140A92138 (WmipDeliverWnodeToDS.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  unsigned int v4; // r12d
  ULONG_PTR i; // rbx
  bool v6; // zf
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // ecx
  char *Pool2; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  int v16; // ecx
  int v18; // [rsp+30h] [rbp-58h]
  unsigned int v19; // [rsp+90h] [rbp+8h] BYREF
  size_t Size; // [rsp+98h] [rbp+10h]
  unsigned int v21; // [rsp+A0h] [rbp+18h]
  int v22; // [rsp+A8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  v4 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; i != WmipDSHeadPtr; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 56) == v1 )
    {
      WmipReferenceEntry(i);
      goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  KeReleaseMutex((PRKMUTEX)&WmipSMMutex, 0);
  if ( i )
  {
    v6 = (*(_DWORD *)(a1 + 44) & 0x80) == 0;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    v19 = 64;
    v22 = v7;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      if ( !WmipAlign(2, (int *)&v19) || (v9 = v19, v8 > ~v19) )
      {
LABEL_28:
        WmipUnreferenceEntry(&WmipDSChunkInfo, i);
        return v2;
      }
      v19 += v8;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    if ( WmipAlign(8, (int *)&v19) )
    {
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v19 )
      {
        v11 = v10 + v19;
        v12 = 0;
        LODWORD(Size) = v11;
        while ( 1 )
        {
          v2 = 0LL;
          v21 = v12;
          if ( v12 >= 2 )
            break;
          Pool2 = (char *)ExAllocatePool2(0x40uLL);
          v2 = Pool2;
          if ( !Pool2 )
            break;
          memset_0(Pool2, 0, (unsigned int)Size);
          *(_DWORD *)v2 = v11;
          v6 = v22 == 0;
          *((_DWORD *)v2 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v2 + 24) = *(_OWORD *)(a1 + 48);
          v14 = *(unsigned int *)(a1 + 8);
          *((_DWORD *)v2 + 11) = v7 | 2;
          *((_DWORD *)v2 + 14) = v19;
          *((_DWORD *)v2 + 2) = v14;
          if ( v6 )
          {
            v8 -= 2;
            *((_DWORD *)v2 + 12) = v9;
            v15 = &v2[v9];
            *(_WORD *)v15 = v8;
            memmove(v15 + 2, (const void *)(a1 + 70), v8);
          }
          else
          {
            *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 68);
          }
          LOBYTE(v14) = 1;
          v18 = WmipDeliverWnodeToDS(v14, i, v2, v11);
          if ( v18 >= 0 )
          {
            v16 = *((_DWORD *)v2 + 11);
            if ( (v16 & 0x20) == 0 )
            {
              *((_DWORD *)v2 + 11) = v16 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_28;
            }
            v4 = *((_DWORD *)v2 + 12);
          }
          LODWORD(Size) = v4;
          ExFreePoolWithTag(v2, 0);
          v2 = 0LL;
          if ( v18 < 0 || v4 <= v11 )
            goto LABEL_28;
          v11 = v4;
          v7 = v22;
          v12 = v21 + 1;
        }
      }
    }
    goto LABEL_28;
  }
  return v2;
}
