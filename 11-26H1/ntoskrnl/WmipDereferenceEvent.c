/*
 * XREFs of WmipDereferenceEvent @ 0x140A0B9C4
 * Callers:
 *     WmipProcessEvent @ 0x140A0D184 (WmipProcessEvent.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     WmipAlign @ 0x1404A4614 (WmipAlign.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     WmipUnreferenceEntry @ 0x140A0EF48 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140A0FB50 (WmipReferenceEntry.c)
 *     WmipDeliverWnodeToDS @ 0x140B342C8 (WmipDeliverWnodeToDS.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v3; // rdi
  unsigned int v4; // r12d
  _DWORD *i; // rbx
  bool v6; // zf
  int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  size_t v13; // rax
  char *Pool2; // rax
  __int64 v15; // rcx
  int v16; // edx
  unsigned int v18; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+10h]
  size_t Size; // [rsp+90h] [rbp+18h]
  unsigned int *v21; // [rsp+98h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v3 = 0LL;
  v4 = 0;
  KeWaitForSingleObject(&EtwpSecurityLock.IoSelfBoostsEntry, Executive, 0, 0, 0LL);
  for ( i = *(_DWORD **)EtwpSecurityLock.AbWaitObject; i != EtwpSecurityLock.AbWaitObject; i = *(_DWORD **)i )
  {
    if ( i[14] == v1 )
    {
      WmipReferenceEntry((ULONG_PTR)i);
      goto LABEL_7;
    }
  }
  i = 0LL;
LABEL_7:
  KeReleaseMutex((PRKMUTEX)&EtwpSecurityLock.IoSelfBoostsEntry, 0);
  if ( i )
  {
    v6 = (*(_DWORD *)(a1 + 44) & 0x80) == 0;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    v18 = 64;
    v19 = v7;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      if ( !WmipAlign(2, &v18) || (v9 = v18, v8 > ~v18) )
      {
LABEL_28:
        WmipUnreferenceEntry(&WmipDSChunkInfo, i);
        return v3;
      }
      v18 += v8;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    if ( WmipAlign(8, &v18) )
    {
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v18 )
      {
        v11 = v10 + v18;
        v12 = 0;
        v13 = v10 + v18;
        while ( 1 )
        {
          v3 = 0LL;
          if ( v12 >= 2 )
            break;
          Size = v13;
          Pool2 = (char *)ExAllocatePool2(0x40uLL);
          v3 = Pool2;
          if ( !Pool2 )
            break;
          memset_0(Pool2, 0, Size);
          v15 = v19;
          *(_DWORD *)v3 = v11;
          *((_DWORD *)v3 + 1) = *(_DWORD *)(a1 + 4);
          *(_OWORD *)(v3 + 24) = *(_OWORD *)(a1 + 48);
          *((_DWORD *)v3 + 2) = *(_DWORD *)(a1 + 8);
          *((_DWORD *)v3 + 11) = v15 | 2;
          *((_DWORD *)v3 + 14) = v18;
          v21 = (unsigned int *)(v3 + 48);
          if ( (_DWORD)v15 )
          {
            *((_DWORD *)v3 + 13) = *(_DWORD *)(a1 + 68);
          }
          else
          {
            *((_DWORD *)v3 + 12) = v9;
            v8 -= 2;
            *(_WORD *)&v3[v9] = v8;
            memmove(&v3[v9 + 2], (const void *)(a1 + 70), v8);
          }
          LOBYTE(v15) = 1;
          LODWORD(Size) = WmipDeliverWnodeToDS(v15, i, v3, v11);
          if ( (Size & 0x80000000) == 0LL )
          {
            v16 = *((_DWORD *)v3 + 11);
            if ( (v16 & 0x20) == 0 )
            {
              *((_DWORD *)v3 + 11) = v16 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_28;
            }
            v4 = *v21;
          }
          ExFreePoolWithTag(v3, 0);
          v3 = 0LL;
          if ( (Size & 0x80000000) != 0LL || v4 <= v11 )
            goto LABEL_28;
          v11 = v4;
          v13 = v4;
          ++v12;
        }
      }
    }
    goto LABEL_28;
  }
  return v3;
}
