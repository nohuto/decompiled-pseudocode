/*
 * XREFs of InitFn @ 0x14003E530
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 *     sub_140016C7C @ 0x140016C7C (sub_140016C7C.c)
 */

__int64 __fastcall InitFn(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  void *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // [rsp+40h] [rbp-28h]
  int pvData; // [rsp+80h] [rbp+18h] BYREF
  DWORD pcbData; // [rsp+88h] [rbp+20h] BYREF

  v4 = (void *)sub_140016C7C(qword_1400E9760, qword_1400E9748, qword_1400E9740);
  *Context = v4;
  v8 = v4;
  v9 = 0;
  if ( (byte_1400E8401 & 4) != 0 )
    sub_14000EE40(v6, v5, v7, 1, (char)v4, 0, 0, 0, v11, 0, 0);
  if ( !v8 )
    SetLastError(0xEu);
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"SkipRTHeap",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    byte_1400E9750 = pvData != 0;
  LOBYTE(v9) = v8 != 0LL;
  return v9;
}
