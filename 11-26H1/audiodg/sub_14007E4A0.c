/*
 * XREFs of sub_14007E4A0 @ 0x14007E4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140031B40 @ 0x140031B40 (sub_140031B40.c)
 *     sub_140037C58 @ 0x140037C58 (sub_140037C58.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_140040814 @ 0x140040814 (sub_140040814.c)
 */

__int64 __fastcall sub_14007E4A0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  int v6; // edi
  __int64 v7; // rax
  RTL_SRWLOCK *v8; // rcx
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  LODWORD(v10) = 0;
  sub_14003E0E8(&v11, (RTL_SRWLOCK *)(a1 + 80), &v10);
  v6 = v10;
  if ( (int)v10 >= 0 )
  {
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 48) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      sub_140037C58((__int64)&v10);
      v7 = *(_QWORD *)(a1 + 64);
      v6 = 0;
      v10 = 0LL;
      if ( (unsigned int)sub_140031B40(&v10, 8uLL, (const void *)(v7 + 8 * v3), 8uLL) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v3) = a3;
        ++*(_DWORD *)(a1 + 96);
      }
    }
  }
  if ( v11 )
  {
    v8 = v11 + 1;
    if ( LODWORD(v11->Ptr) == 1 )
      LODWORD(v8->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v8);
  }
  if ( v6 >= 0 )
    return (unsigned int)sub_140040814();
  return (unsigned int)v6;
}
