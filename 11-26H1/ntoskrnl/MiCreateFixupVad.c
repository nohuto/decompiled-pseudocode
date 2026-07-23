/*
 * XREFs of MiCreateFixupVad @ 0x14099F45C
 * Callers:
 *     MiCloneImageVad @ 0x140714B50 (MiCloneImageVad.c)
 *     MiInitializeImageVad @ 0x14099ED2C (MiInitializeImageVad.c)
 * Callees:
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiInitializePrivateFixupBitmap @ 0x14099F814 (MiInitializePrivateFixupBitmap.c)
 */

__int64 __fastcall MiCreateFixupVad(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  __int64 result; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 LockedVadEvent; // rbx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(a2 + 80);
  v18 = 0LL;
  v10 = *(_QWORD **)v5;
  v11 = *(_QWORD *)((*(_QWORD *)(*(_QWORD *)v5 + 96LL) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  result = MiCreateVadEvent(a1, (__int64)MiDeleteVadEventPrivateFixup, (__int64)&v18);
  if ( (int)result >= 0 )
  {
    v13 = v18;
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1288LL);
    if ( a3 )
    {
      LockedVadEvent = MiLocateLockedVadEvent(a3, 0x400u);
      memmove(*(void **)(v13 + 32), *(const void **)(LockedVadEvent + 32), *(_QWORD *)(v13 + 24) >> 3);
      *(_DWORD *)(v13 + 40) = *(_DWORD *)(LockedVadEvent + 40);
      *(_QWORD *)(v13 + 48) = *(_QWORD *)(LockedVadEvent + 48);
    }
    else
    {
      if ( a5 )
        v14 = -(*(_QWORD *)(v11 + 40) + *(_QWORD *)(v11 + 48));
      else
        v14 = ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12)
            - *(_QWORD *)(*v10 + 32LL);
      v15 = *(_QWORD *)(a2 + 88) - v10[17];
      *(_DWORD *)(v13 + 40) = a4;
      *(_QWORD *)(v13 + 48) = v14 - (v15 >> 3 << 12);
      v16 = MiInitializePrivateFixupBitmap(v13 + 24, v10, a4);
      *(_DWORD *)(a2 + 52) = v16;
      *(_BYTE *)(a2 + 34) = BYTE4(v16);
      *(_DWORD *)(a2 + 48) |= 0x100000u;
    }
    return 0LL;
  }
  return result;
}
