/*
 * XREFs of HvlpSlowFlushPasidAddressList @ 0x1405C1330
 * Callers:
 *     HvlFlushPasid @ 0x1404D39A0 (HvlFlushPasid.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HvlpCopyFlushVaList @ 0x14032DF20 (HvlpCopyFlushVaList.c)
 *     HvlpFlushPasidAddressSpace @ 0x1405C121C (HvlpFlushPasidAddressSpace.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall HvlpSlowFlushPasidAddressList(int a1, int a2, unsigned int a3, void *a4, char a5)
{
  __int64 v5; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-20h]
  unsigned __int64 v18; // [rsp+40h] [rbp-18h]

  v5 = a3;
  v16 = 0LL;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v9 = HvlpAcquireHypercallPage((__int64)&v16, 5, 0LL, 0LL);
  v10 = v9;
  if ( !v9 )
    return HvlpFlushPasidAddressSpace(a1, a2);
  v9[1] = 0LL;
  *((_DWORD *)v9 + 1) = a1;
  *(_DWORD *)v9 = a2;
  if ( a5 )
  {
    memmove(v9 + 2, a4, 8 * v5);
    *((_DWORD *)v10 + 2) |= 1u;
  }
  else
  {
    HvlpCopyFlushVaList(v5, (__int64 *)a4, 0, (__int64)(v9 + 2));
  }
  LODWORD(v15) = 161;
  HIDWORD(v15) = v5 & 0xFFF;
  HvcallInitiateHypercall(v15, v18);
  return HvlpReleaseHypercallPage((unsigned int *)&v16, v12, v13, v14);
}
