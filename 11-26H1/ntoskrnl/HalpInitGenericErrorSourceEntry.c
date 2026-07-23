/*
 * XREFs of HalpInitGenericErrorSourceEntry @ 0x140BF1DF4
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x140BF23F8 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140345690 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140365B60 (MmMapIoSpaceEx.c)
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     RtlStringCchCopyA @ 0x140486D18 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpInitGenericErrorSourceEntry(__int64 a1, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 Pool2; // rdi
  int v6; // r14d
  _DWORD *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int128 v12; // xmm1
  _DWORD Src[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-50h]
  int v17; // [rsp+34h] [rbp-4Ch]
  int v18; // [rsp+38h] [rbp-48h]
  int v19; // [rsp+3Ch] [rbp-44h]
  char pszDest[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]

  v4 = 0;
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a1 + 44);
    *(_QWORD *)(Pool2 + 40) = MmMapIoSpaceEx(*(_QWORD *)(a1 + 56), 8LL, 0x204u);
    v22 = *(_QWORD *)(a1 + 56);
    v23 = *(unsigned int *)(a1 + 44);
    *(_OWORD *)pszDest = 0LL;
    v21 = 0LL;
    Src[0] = 1733060695;
    Src[1] = 1;
    v15 = 80LL;
    v17 = -2147483615;
    v16 = 1280201291;
    v18 = 2;
    v19 = 48;
    RtlStringCchCopyA(pszDest, 0x20uLL, "Error_Status_block_register");
    WheaLogInternalEvent(Src);
    if ( *(_QWORD *)(Pool2 + 40)
      && (v6 = *(_DWORD *)(a1 + 16) + 80 + *(_DWORD *)(Pool2 + 48),
          v7 = (_DWORD *)ExAllocatePool2(0x40uLL),
          (*(_QWORD *)(Pool2 + 24) = v7) != 0LL) )
    {
      *v7 = 1095059543;
      v10 = Pool2 + 88;
      v11 = 7LL;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 4LL) = 3;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 8LL) = v6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 16LL) = 6;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 24LL) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 28LL) = 5;
      *(GUID *)(*(_QWORD *)(Pool2 + 24) + 32LL) = GENERIC_NOTIFY_TYPE_GUID;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 56LL) = 7;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 64LL) = 80;
      *(_DWORD *)(*(_QWORD *)(Pool2 + 24) + 68LL) = *(_DWORD *)(Pool2 + 48);
      do
      {
        *(_OWORD *)v10 = *(_OWORD *)a1;
        *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 48);
        *(_OWORD *)(v10 + 64) = *(_OWORD *)(a1 + 64);
        *(_OWORD *)(v10 + 80) = *(_OWORD *)(a1 + 80);
        *(_OWORD *)(v10 + 96) = *(_OWORD *)(a1 + 96);
        v10 += 128LL;
        v12 = *(_OWORD *)(a1 + 112);
        a1 += 128LL;
        *(_OWORD *)(v10 - 16) = v12;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v10 = *(_OWORD *)a1;
      *(_OWORD *)(v10 + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(v10 + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(v10 + 48) = *(_OWORD *)(a1 + 48);
      *(_QWORD *)(v10 + 64) = *(_QWORD *)(a1 + 64);
      *(_DWORD *)(v10 + 72) = *(_DWORD *)(a1 + 72);
    }
    else
    {
      v8 = *(void **)(Pool2 + 40);
      v4 = -1073741670;
      if ( v8 )
        MmUnmapIoSpace(v8, 8uLL);
      v9 = *(void **)(Pool2 + 24);
      if ( v9 )
        ExFreePoolWithTag(v9, 0x576C6148u);
      ExFreePoolWithTag((PVOID)Pool2, 0x576C6148u);
      Pool2 = 0LL;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  *a2 = Pool2;
  return v4;
}
