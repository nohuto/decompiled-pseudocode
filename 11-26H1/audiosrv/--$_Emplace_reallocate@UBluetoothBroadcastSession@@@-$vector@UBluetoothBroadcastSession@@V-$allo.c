/*
 * XREFs of ??$_Emplace_reallocate@UBluetoothBroadcastSession@@@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAPEAUBluetoothBroadcastSession@@QEAU2@$$QEAU2@@Z @ 0x1800E872C
 * Callers:
 *     ?push_back@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAAX$$QEAUBluetoothBroadcastSession@@@Z @ 0x1800EE6FC (-push_back@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@std@@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180013AF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800BD030 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800D3144 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@YAPEAUBluetoothBroadcastSession@@QEAU1@0PEAU1@AEAV?$allocator@UBluetoothBroadcastSession@@@0@@Z @ 0x1800E8D94 (--$_Uninitialized_move@PEAUBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@.c)
 *     ??1_Reallocation_guard@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@QEAA@XZ @ 0x1800EA0D0 (--1_Reallocation_guard@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSess.c)
 *     ?_Change_array@?$vector@UBluetoothBroadcastSession@@V?$allocator@UBluetoothBroadcastSession@@@std@@@std@@AEAAXQEAUBluetoothBroadcastSession@@_K1@Z @ 0x1800ED834 (-_Change_array@-$vector@UBluetoothBroadcastSession@@V-$allocator@UBluetoothBroadcastSession@@@st.c)
 */

char *__fastcall std::vector<BluetoothBroadcastSession>::_Emplace_reallocate<BluetoothBroadcastSession>(
        _QWORD *a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  __int128 v14; // xmm0
  char *v15; // rdi
  char *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-48h]
  char *v26; // [rsp+38h] [rbp-40h]
  char *v27; // [rsp+40h] [rbp-38h]

  v4 = 0x555555555555555LL;
  v7 = (a2 - *a1) / 48;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 4);
  if ( v8 == 0x555555555555555LL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 4);
  v11 = v10 >> 1;
  if ( v10 <= 0x555555555555555LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v8 + 1;
  }
  size_of = std::_Get_size_of_n<48>(v4);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v24 = a1;
  v25 = v4;
  v15 = v13;
  v16 = &v13[48 * v7];
  v26 = v16;
  *(_OWORD *)v16 = v14;
  *((_QWORD *)v16 + 2) = *((_QWORD *)a3 + 2);
  v17 = *((_QWORD *)a3 + 5);
  v18 = *((_QWORD *)a3 + 4);
  v19 = *((_QWORD *)a3 + 3);
  *((_QWORD *)a3 + 5) = 0LL;
  *((_QWORD *)a3 + 4) = 0LL;
  *((_QWORD *)a3 + 3) = 0LL;
  *((_QWORD *)a3 + 2) = 0LL;
  v20 = v15;
  *((_QWORD *)v16 + 3) = v19;
  *((_QWORD *)v16 + 4) = v18;
  *((_QWORD *)v16 + 5) = v17;
  v21 = a1[1];
  v22 = *a1;
  v27 = v16 + 48;
  if ( a2 != v21 )
  {
    std::_Uninitialized_move<BluetoothBroadcastSession *>(v22, a2, v15);
    v21 = a1[1];
    v20 = v16 + 48;
    v22 = a2;
    v26 = v15;
  }
  std::_Uninitialized_move<BluetoothBroadcastSession *>(v22, v21, v20);
  std::vector<BluetoothBroadcastSession>::_Change_array(a1, v15, v9, v4, v24, 0LL, v25, v26, v27);
  std::vector<BluetoothBroadcastSession>::_Reallocation_guard::~_Reallocation_guard(&v24);
  return v16;
}
