/*
 * XREFs of sub_14017F720 @ 0x14017F720
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400066C0 @ 0x1400066C0 (sub_1400066C0.c)
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_14009A35C @ 0x14009A35C (sub_14009A35C.c)
 *     sub_14009DB38 @ 0x14009DB38 (sub_14009DB38.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     sub_140179A60 @ 0x140179A60 (sub_140179A60.c)
 */

__int64 __fastcall sub_14017F720(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rbx
  int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r8
  void (__fastcall *v12)(_QWORD, _QWORD); // r9
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // r9
  unsigned __int64 v18; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int v22; // [rsp+20h] [rbp-18h]

  v3 = a1[6];
  v6 = *(_QWORD *)(v3 + 16);
  if ( a2 == 2 )
  {
    v7 = sub_1400066C0(*(_QWORD *)(v3 + 16), 0LL, 0);
    if ( v7 >= 0 )
    {
      v7 = sub_140179A60(*(_QWORD *)(v6 + 24), a1[7], a3);
      if ( (unsigned int)sub_1400567A0() )
      {
        if ( v7 >= 0 )
        {
          v13 = *(_QWORD *)(v6 + 3600);
          if ( v13 )
          {
            v14 = *(_QWORD *)(v13 + 48);
            if ( v14 )
            {
              if ( *(_QWORD *)(v14 + 88) )
              {
                v15 = sub_14009DB38(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8));
                v7 = v17(*(_QWORD *)(v16 + 8), v15);
                if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                  && (HIDWORD(off_140168120->Timer) & 0x10000) != 0
                  && BYTE1(off_140168120->Timer) >= 4u )
                {
                  v22 = v7;
                  sub_140067FD4((__int64)off_140168120->AttachedDevice, 0x24u, (__int64)&unk_14014D880, v6, v22);
                }
              }
            }
          }
        }
      }
      v18 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
      v19 = *(_DWORD *)(v18 + *(_QWORD *)(v6 + 40));
      while ( (v19 & 1) == 0 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + *(_QWORD *)(v6 + 40)), v19 - 2, v19);
        if ( v20 == v19 )
          return (unsigned int)v7;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 1032), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v6 + 520), 0, 0);
    }
  }
  else if ( a2 == 7 )
  {
    if ( (unsigned int)sub_1400567A0() )
    {
      v8 = *(_QWORD *)(v6 + 3600);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( v9 )
        {
          if ( *(_QWORD *)(v9 + 96) )
          {
            v10 = sub_14009DB38(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8));
            v12(*(_QWORD *)(v11 + 8), v10);
          }
        }
      }
    }
    return (unsigned int)sub_14009A35C(a3, a1);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v7;
}
