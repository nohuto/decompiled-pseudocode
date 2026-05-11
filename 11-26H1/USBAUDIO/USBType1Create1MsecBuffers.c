/*
 * XREFs of USBType1Create1MsecBuffers @ 0x14003D104
 * Callers:
 *     USBType1RenderCreatePin @ 0x14003CED0 (USBType1RenderCreatePin.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D6A0 (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1Create1MsecBuffers(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbp
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  __int64 v6; // rdi
  int v7; // esi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdi
  PIRP Irp; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  unsigned __int64 v17; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v18; // [rsp+70h] [rbp+18h]

  v18 = *(_QWORD **)(a1 + 16);
  v17 = 0LL;
  v2 = v18[19];
  v3 = *(_DWORD *)(v18[18] + 220LL) & 0x3FF;
  v4 = 0x1000uLL / (v3 + 7);
  if ( (_DWORD)v4 )
    v5 = 0xC / (unsigned int)v4 + (0xC % (unsigned int)v4 != 0);
  else
    v5 = 12;
  v6 = v5 << 12;
  v7 = USBHwAllocateAndBag((PVOID *)&v17, (v6 + 6147) & 0xFFFFF000, 64LL, *(void **)(a1 + 8));
  if ( v7 >= 0 )
  {
    v8 = v17;
    v9 = v2 + 152;
    *(_QWORD *)(v2 + 160) = v2 + 152;
    v10 = 0;
    *(_QWORD *)(v2 + 152) = v2 + 152;
    v17 = v6 + v8;
    v11 = v2 + 200;
    while ( v7 >= 0 )
    {
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v18[2] + 40LL) + 76LL), 0);
      *(_QWORD *)(v11 + 16) = Irp;
      if ( Irp )
      {
        v7 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
        if ( v7 >= 0 )
        {
          v13 = v17;
          *(_QWORD *)(v11 + 48) = v8;
          *(_QWORD *)(v11 + 40) = a1;
          v8 = (v3 + v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v11 + 24) = v13;
          if ( ((v8 ^ (v8 + v3)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
            v8 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
          v14 = *(_QWORD **)(v2 + 160);
          v17 = (v13 + 171) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( *v14 != v9 )
            __fastfail(3u);
          *(_QWORD *)v11 = v9;
          *(_QWORD *)(v11 + 8) = v14;
          *v14 = v11;
          *(_QWORD *)(v2 + 160) = v11;
        }
        else
        {
          IoFreeIrp(*(PIRP *)(v11 + 16));
        }
      }
      else
      {
        v7 = -1073741670;
      }
      ++v10;
      v11 += 56LL;
      if ( v10 >= 0xC )
      {
        if ( v7 >= 0 )
          KeInitializeSemaphore((PRKSEMAPHORE)(v2 + 168), 12, 12);
        return (unsigned int)v7;
      }
    }
  }
  return (unsigned int)v7;
}
