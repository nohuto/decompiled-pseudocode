/*
 * XREFs of EtwpObjectTypeRundown @ 0x140835A9C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryObject @ 0x1407281C0 (ZwQueryObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpObjectTypeRundown(__int64 a1, char a2)
{
  unsigned __int16 *Pool2; // rbx
  NTSTATUS v5; // eax
  unsigned __int16 v6; // r14
  unsigned __int16 *v7; // rdi
  unsigned int i; // esi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  ULONG ObjectInformationLength; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+34h] [rbp-3Ch] BYREF
  __int16 v14; // [rsp+38h] [rbp-38h]
  _QWORD v15[3]; // [rsp+40h] [rbp-30h] BYREF
  int v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+5Ch] [rbp-14h]

  ObjectInformationLength = 1024;
  v13 = 0;
  Pool2 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      break;
    v5 = ZwQueryObject(0LL, ObjectTypesInformation, Pool2, ObjectInformationLength, &ObjectInformationLength);
    if ( v5 != -1073741820 )
    {
      if ( v5 >= 0 )
      {
        v15[1] = 4LL;
        v15[0] = &v13;
        v6 = 4389 - (a2 != 0);
        v7 = Pool2 + 4;
        for ( i = 0;
              i < *(_DWORD *)Pool2;
              v7 = (unsigned __int16 *)((char *)v7 + ((v7[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 104) )
        {
          if ( i )
          {
            v9 = *(_DWORD *)a1;
            v10 = *(_QWORD *)(a1 + 1360);
            LOWORD(v13) = *((unsigned __int8 *)v7 + 90);
            v11 = *((_QWORD *)v7 + 1);
            v16 = *v7 + 2;
            v15[2] = v11;
            v17 = 0;
            EtwpLogKernelEvent((__int64)v15, v10, v9, 2u, v6, 0x501802u);
          }
          ++i;
        }
      }
      ExFreePoolWithTag(Pool2, 0);
      return;
    }
  }
}
